// Arrian Chi acchi
// $Id: auxlib.cpp,v 1.1 2021-12-08 12:07:42-08 - - $

#include <cassert>
#include <cerrno>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
using namespace std;

#include "auxlib.h"

string exec::name_;
int exec::status_ = EXIT_SUCCESS;

void exec::name (const char* argv0) {
   name_ = basename (argv0);
   cout << boolalpha;
   cerr << boolalpha;
}

const string& exec::name() {
   assert (exec::name_ != "");
   return name_;
}

void exec::status (int status) {
   assert (exec::name_ != "");
   if (status_ < status) status_ = status;
}

ostream& exec::error() {
   assert (exec::name_ != "");
   exec::status (EXIT_FAILURE);
   return cerr << exec::name() << ": ";
}

fatal_error::fatal_error (const string& what): runtime_error (what) {
   exec::status (EXIT_FAILURE);
}

ostream& operator<< (ostream& out, wait_status wait) {
   int status = wait.status;
   if (WIFSIGNALED (status)) {
      out << "Terminated: " << strsignal (WTERMSIG (status));
      #ifdef WCOREDUMP
      if (WCOREDUMP (status)) out << " (core dumped)";
      #endif
      return out;
   }
   if (WIFEXITED (status)) {
      return out << "Exit " << WEXITSTATUS (status);
   }
   if (WIFSTOPPED (status)) {
      return out << "Stopped: " << strsignal (WSTOPSIG (status));
   }
   if (WIFCONTINUED (status)) {
      return out << "Continued";
   }
   return out << "Unknown status {"
              << (status >> 8 & 0xFF) << ","
              << (status >> 7 & 1) << ","
              << (status & 0x7F) << "}";
}


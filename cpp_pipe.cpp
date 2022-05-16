// Arrian Chi acchi
// $Id: cpp_pipe.cpp,v 1.1 2021-12-08 12:07:42-08 - - $

#include <cerrno>
#include <cstring>
#include <iostream>
using namespace std;

#include "auxlib.h"
#include "cpp_pipe.h"

cpp_pipe::cpp_pipe (const char* filename, bool debug, \
                           string suppressed):
               cpp_command (string (cpp_name) + " " \
                              + suppressed + " " + filename),
               cpp_debug (debug) {
   cpp_file = popen (cpp_command.c_str(), "r");
   if (cpp_file == nullptr) {
      cpp_errno = errno;
   }else {
      if (cpp_debug) {
         cerr << "--cpp_pipe: popen (\"" << cpp_command
              << "\"): fileno = " << fileno (cpp_file) << endl;
      }
   }
}

cpp_pipe::~cpp_pipe() {
   if (cpp_file) close_pipe();
}

cpp_pipe::operator bool() const {
   return cpp_file != nullptr;
}

FILE* cpp_pipe::get_pipe()  {
   if (cpp_file == nullptr) {
      throw fatal_error (cpp_command + ": " + strerror (cpp_errno));
   }
   return cpp_file;
}

void cpp_pipe::close_pipe() {
   if (cpp_debug) {
         cerr << "--cpp_pipe: pclose (\"" << cpp_command
              << "\"): fileno = " << fileno (cpp_file) << endl;
   }
   int status = pclose (cpp_file);
   cpp_file = nullptr;
   if (status != 0) {
      exec::error() << "pclose failed: " << cpp_command << ": "
            << wait_status {status} << endl;
   }
}


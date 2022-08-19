#include "error.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <iomanip>

void exec::name (const char* argv0) {
   name_ = basename (argv0);
   cout << boolalpha;
   cerr << boolalpha;
}

const string& exec::name() {
   assert (exec::name_ != "");
   return name_;
}
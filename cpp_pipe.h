// Arrian Chi acchi
// $Id: cpp_pipe.h,v 1.2 2021-12-20 13:07:53-08 - - $

#ifndef CPP_PIPE_H
#define CPP_PIPE_H

#include <cstdio>
#include <string>
using namespace std;

// Pipe to read output of C++ preprocessor cpp.

class cpp_pipe {
   private:
      static constexpr const char* cpp_name {"/usr/bin/cpp -nostdinc"};
      string cpp_command;
      bool cpp_debug {false};
      FILE* cpp_file {nullptr};
      int cpp_errno {0};
   public:
      cpp_pipe (const cpp_pipe&) = delete;
      cpp_pipe& operator= (const cpp_pipe&) = delete;
      cpp_pipe (const char* filename, bool debug = false, \
                  string suppressed = "");
      ~cpp_pipe();
      operator bool() const;
      FILE* get_pipe();
      void close_pipe();
};

#endif


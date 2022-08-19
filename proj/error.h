#ifndef ERROR_H
#define ERROR_H

#include <string>
#include <iostream>
#include <stdexcept>
#include <iomanip>


using namespace std;

// Adapted from CSE110A 
class MeowUtil{
   private:
      static string name_;
      static void name (const char*);
      friend int main (int, char**);
   public:
      static const string& name();  
      static ostream& error();
}

// class BaseError : public std::runtime_error {
//     location loc;    
//     using std::runtime_error::runtime_error;
//     public: 
//         BaseError(string msg, const location& loc_) : std::runtime_error(msg), loc(loc_) {}
//         const char* what() const throw() {return runtime_error::what();};
// };

// class BadTokenError : BaseError {    
//     public: 
//         unsigned char bad;

//         BadTokenError (const location& loc_, unsigned char bad_): BaseError("Unexpected character '" + std::to_string(bad_) + "' at " + loc_.to_string(), loc_),  bad(bad_) {}
//         const char* what() const throw() {return BaseError::what();};
// };



#endif 
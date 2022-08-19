#include <string>
#include <iostream>
#include "location.h"

ostream& operator<< (ostream& out, const location& loc) {
   return out << loc.linenr << "." << loc.offset;
}

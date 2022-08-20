#include <string>
#include <bitset>
#include <iostream>

#include "attr.h"


ostream& operator<< (ostream& out, const attributes& a) {
   out << "{" << a.block_nr << "}";
   //bool is_ident = false;
   for (size_t i = 0; i < attr::BITSET_SIZE; ++i){
      if (a.attrbits[i]){
         out << " " << ATTR_NAMES[i];
      }
   }

   if (a.attrbits[attr::VARIABLE])
      out << " (" << a.defloc << ")";
   // check if is ident
   return out;
}

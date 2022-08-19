#ifndef LOCATION_H
#define LOCATION_H
#include <string>

using namespace std;

struct location {
    size_t meownr = 0;
    size_t linenr = 0;
    size_t offset = 0;
    location() {};
    location (size_t ln, size_t of) : linenr(ln), offset(of) {};

    string to_string() const { return std::to_string(linenr) + "." + std::to_string(offset);};

};
ostream& operator<< (ostream&, const location&);

#endif
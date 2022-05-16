// $Id: oclib.h,v 1.16 2022-01-26 19:57:29-08 - - $

// Bilingual file useable as a header file for both oc and g++.

#ifndef OCLIB_H
#define OCLIB_H

#ifdef __cplusplus
extern "C" {
using string = char*;
#endif

#define EOF (-1)
#define bool int
#define true 1
#define false 0
#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

#define assert(expr) {if (not (expr)) fail (#expr, __FILE__, __LINE__);}

void fail (string expr, string file, int line);

void putchr (int chr);
void putint (int num);
void putstr (string str);

int getchr();
string getstr();
string getln();

#ifdef __cplusplus
}
#endif

#endif


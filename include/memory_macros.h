#include <stdlib.h>

#define ALLOC_NEW(typename) {malloc(sizeof(typename));}
#define ALLOC_NEW_N(typename, number) {malloc(sizeof(typename) * number);}

#define REALLOC(ptr, newSize) {realloc(ptr, newSize);}
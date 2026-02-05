#ifndef UTILS_H
#define UTILS_H
#include <stddef.h>

typedef struct{
    size_t length;
    char * buf;
} String;

// String utils
String * initNewString();
String * initString(char * buf, size_t length);
void destroyString(String * s);
void printString(String * s);
String * spliceString(String * s, size_t i, size_t j);
char * getChars(String * s);
// TODO: Implement
// void insertChars(String * s, char * buf, size_t i);

#endif
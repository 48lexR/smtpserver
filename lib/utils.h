#ifndef UTILS_H
#define UTILS_H
#include <stddef.h>

typedef struct{
    size_t length;
    char * buf;
} String;

typedef struct {
    String * reverse;
    String * backward;
    String * data;
} Letter;

// String utils
String * initNewString();
String * initString(char * buf, size_t length);
void destroyString(String * s);
void printString(String * s);
String * spliceString(String * s, size_t i, size_t j);
char * getChars(String * s);

Letter * initNewLetter();
Letter * initLetter(String * reverse, String * forward, String * data);
void destroyLetter(Letter * letter);
void printLetter(Letter * letter);
char * getReverse(Letter * letter);
char * getForward(Letter * letter);
char * getData(Letter * letter);
#endif
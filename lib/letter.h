#ifndef LETTER_H
#define LETTER_H
#include "lib/stringUtils.h"
#include "lib/vector.h"
#include <stddef.h>

typedef struct {
    String * reverse;
    Vector * backward;
    String * data;
} Letter;

Letter * initNewLetter();
Letter * initLetter(String * reverse, String * forward, String * data);
void destroyLetter(Letter * letter);
void printLetter(Letter * letter);
char * getReverse(Letter * letter);
char * getForward(Letter * letter);
char * getData(Letter * letter);

#endif
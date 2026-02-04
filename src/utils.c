#include "lib/utils.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

String * initNewString(){
    String * s = malloc(sizeof(String));
    s->length = 0;
    s->buf = malloc(sizeof(char));
    return s;
}

String * initString(char * buf, size_t length){
    String * s = malloc(sizeof(String));
    s->length = length;
    s->buf = malloc(sizeof(char)*length);
    memcpy(s->buf, buf, s->length);
    return s;
}


void destroyString(String * s){
    free(s->buf);
    free(s);
}

void printString(String * s){
    size_t i = 0;
    while(i < s->length){
        putchar(s->buf[i++]);
    }
}

String * spliceString(String * s, size_t i, size_t j){
    String * t = malloc(sizeof(String));
    t->length = j - i;
    t->buf = malloc(sizeof(char)*t->length);
    size_t k = 0;
    while(k < j-i){
        memcpy(t->buf+(k++), s->buf+(i++), 1);
    }
    return t;
}

char * getChars(String * s){
    return s->buf;
}

Letter * initNewLetter(){
    Letter * letter = malloc(sizeof(letter));
    letter->reverse = initNewString();
    letter->forward = initNewString();
    letter->data = initNewString();
    return letter;
}

Letter * initLetter(String * reverse, String * forward, String * data){
    Letter * letter = malloc(sizeof(Letter));
    letter->reverse = reverse;
    letter->forward = forward;
    letter->data = data;
    return letter;
}

void destroyLetter(Letter * letter){
    destroyString(letter->reverse);
    destroyString(letter->forward);
    destroyString(letter->data);
    free(letter);
}

void printLetter(Letter * letter){
    printf("From: %s", getReverse(letter));
    //getForward()
    printf("%s", getData(letter));
    
}

char * getReverse(Letter * letter){
    return getChars(letter->reverse);
}

char * getForward(Letter * letter){

}

char * getData(Letter * letter){
    return getChars(letter->data);
}
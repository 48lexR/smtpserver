#include "lib/letter.h"
#include "lib/string.h"
#include <stdlib.h>
#include <stdio.h>

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

int writeLetter(Letter * letter, char * fname){
    if(!letter){
        perror("ERROR: letter is null. Exiting...");
        return -1;
    }
    FILE * f = fopen(fname, "a");
    fwrite()
}
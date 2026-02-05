#ifndef VECTOR_H
#define VECTOR_H

typedef struct {
    size_t length;
    size_t maxLength;
    size_t size;
    void * buf;
} Vector;

Vector * initNewVector();
Vector * initVector(size_t length, size_t maxLength, size_t size, void * buf);
void appendVector(Vector * v);
void * removeVector(Vector * v, size_t i);

#endif
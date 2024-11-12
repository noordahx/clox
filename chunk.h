#ifndef clox_chunk_h
#define clox_chunk_h

#include "common.h"
#include "value.h"

typedef enum {
    OP_CONSTANT, // Push a constant onto the stack
    OP_RETURN,  // Return from the current function
} OpCode;

typedef struct {
    int count; // Number of elements in the array
    int capacity; // Number of elements the array can hold
    uint8_t* code;
    int* lines;
    ValueArray constants;
} Chunk;

void initChunk(Chunk* chunk);
void freeChunk(Chunk* chunk);
void writeChunk(Chunk* chunk, uint8_t byte, int line);
int addConstant(Chunk* chunk, Value value);

#endif
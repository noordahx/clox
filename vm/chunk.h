#ifndef clox_chunk_h
#define clox_chunk_h

#include "../src/common.h"
#include "../src/value.h"

typedef enum {
	OP_RETURN,
	OP_CONSTANT,
	OP_NEGATE,
	OP_ADD,
	OP_SUBSTRACT,
	OP_MULTIPLY,
	OP_DIVIDE,
	OP_NIL,
	OP_TRUE,
	OP_FALSE,
	OP_NOT,
	OP_EQUAL,
	OP_GREATER,
	OP_LESS,
	OP_PRINT,
	OP_POP,
	OP_DEFINE_GLOBAL,
	OP_GET_GLOBAL,
	OP_SET_GLOBAL,
	OP_GET_LOCAL,
	OP_SET_LOCAL,
	OP_JUMP_IF_FALSE,
	OP_JUMP,
	OP_LOOP,
	OP_CALL,
} OpCode;

typedef struct {
	int count;					// entries actually in use
	int capacity;				
	uint8_t* code;
	int* lines;
	ValueArray constants;
} Chunk;

void initChunk(Chunk* chunk);
void freeChunk(Chunk* chunk);
void writeChunk(Chunk* chunk, uint8_t byte, int line);
int addConstant(Chunk* chunk, Value value);

#endif

#ifndef clox_compiler_h
#define clox_compiler_h

#include "../src/object.h"
#include "../vm/chunk.h"

ObjFunction* compile(const char* source);

#endif

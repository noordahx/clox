#include "common.h"
#include "chunk.h"
#include "debug.h"
#include "vm.h"

int main(int argc, const char* argv[]) {
    initVM();

    Chunk chunk;
    initChunk(&chunk);

    /*
    int constant = addConstant(&chunk, 1.2);
    writeChunk(&chunk, OP_CONSTANT, 123);
    writeChunk(&chunk, constant, 123);
    */

    writeConstant(&chunk, 1.2, 123);

    writeChunk(&chunk, OP_RETURN, 123);

    for (int i = 0; i < 260; i++) {
      writeConstant(&chunk, 1.2, 123);
    }

    disassembleChunk(&chunk, "test chunk");
    interpret(&chunk);
    freeVM();
    freeChunk(&chunk);
    return 0;

}

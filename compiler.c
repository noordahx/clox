//
// Created by ntaumergenov on 3/26/2024.
//

#include <stdio.h>
#include "compiler.h"
#include "common.h"
#include "scanner.h"



bool compile(const char* source, Chunk* chunk) {
    initScanner(source);
    advance();
    expression();
    consume(TOKEN_EOF, "Expect end of expression.");
}

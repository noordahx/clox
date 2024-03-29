//
// Created by ntaumergenov on 3/19/2024.
//

//expression
//| parsePrecedence(PREC_ASSIGNMENT)
//| | grouping
//| | | expression
//| | | | parsePrecedence(PREC_ASSIGNMENT)
//| | | | | unary // for "-"
//| | | | | | parsePrecedence(PREC_UNARY)
//| | | | | | | number
//| | | | | binary // for "+"
//| | | | | | parsePrecedence(PREC_FACTOR) // PREC_TERM + 1
//| | | | | | | number
//| | binary // for "*"
//| | | parsePrecedence(PREC_UNARY) // PREC_FACTOR + 1
//| | | | number
//| | binary // for "-"
//| | | parsePrecedence(PREC_FACTOR) // PREC_TERM + 1
//| | | | unary // for "-"
//| | | | | parsePrecedence(PREC_UNARY)
//| | | | | | number

#ifndef CLOX_COMMON_H
#define CLOX_COMMON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define DEBUG_PRINT_CODE
#define DEBUG_TRACE_EXECUTION

#endif //CLOX_COMMON_H

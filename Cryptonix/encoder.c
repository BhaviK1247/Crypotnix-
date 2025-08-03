// encoder.c
#include <stdio.h>
#include <ctype.h>
#include "encoder.h"

void encode_text(const char *input) {
    for (int i = 0; input[i] != '\0'; i++) {
        char ch = toupper(input[i]);
        switch (ch) {
            case 'A': printf("@1"); break;
            case 'B': printf("#2"); break;
            case 'C': printf("$3"); break;
            case 'D': printf("%%4"); break;
            case 'E': printf("^5"); break;
            case 'F': printf("&6"); break;
            case 'G': printf("*7"); break;
            case 'H': printf("(8"); break;
            case 'I': printf(")9"); break;
            case 'J': printf("!0"); break;
            case 'K': printf("~1"); break;
            case 'L': printf("`2"); break;
            case 'M': printf("+3"); break;
            case 'N': printf("-4"); break;
            case 'O': printf("=5"); break;
            case 'P': printf("[6"); break;
            case 'Q': printf("]7"); break;
            case 'R': printf("{8"); break;
            case 'S': printf("}9"); break;
            case 'T': printf("<0"); break;
            case 'U': printf(">1"); break;
            case 'V': printf("/2"); break;
            case 'W': printf("?3"); break;
            case 'X': printf(":4"); break;
            case 'Y': printf(";5"); break;
            case 'Z': printf("|6"); break;
            default: putchar(ch); break;
        }
    }
}


// decoder.c
#include <stdio.h>
#include "encoder.h"

char decode_pair(char a, char b) {
    if (a == '@' && b == '1') return 'A';
    if (a == '#' && b == '2') return 'B';
    if (a == '$' && b == '3') return 'C';
    if (a == '%' && b == '4') return 'D';
    if (a == '^' && b == '5') return 'E';
    if (a == '&' && b == '6') return 'F';
    if (a == '*' && b == '7') return 'G';
    if (a == '(' && b == '8') return 'H';
    if (a == ')' && b == '9') return 'I';
    if (a == '!' && b == '0') return 'J';
    if (a == '~' && b == '1') return 'K';
    if (a == '`' && b == '2') return 'L';
    if (a == '+' && b == '3') return 'M';
    if (a == '-' && b == '4') return 'N';
    if (a == '=' && b == '5') return 'O';
    if (a == '[' && b == '6') return 'P';
    if (a == ']' && b == '7') return 'Q';
    if (a == '{' && b == '8') return 'R';
    if (a == '}' && b == '9') return 'S';
    if (a == '<' && b == '0') return 'T';
    if (a == '>' && b == '1') return 'U';
    if (a == '/' && b == '2') return 'V';
    if (a == '?' && b == '3') return 'W';
    if (a == ':' && b == '4') return 'X';
    if (a == ';' && b == '5') return 'Y';
    if (a == '|' && b == '6') return 'Z';
    return '?';
}

void decode_text(const char *input) {
    for (int i = 0; input[i] != '\0'; ) {
        if (input[i + 1] != '\0') {
            char decoded = decode_pair(input[i], input[i + 1]);
            putchar(decoded);
            i += 2;
        } else {
            putchar(input[i]);
            i++;
        }
    }
}


#include "reverse_string.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *reverse(const char *value) {
    int n = strlen(value);

    char *r = calloc(n, sizeof(char));

    r += n;

    while (*value) {
        *(--r) = *(value++);
    }

    return r;
}
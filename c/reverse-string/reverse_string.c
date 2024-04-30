#include "reverse_string.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *reverse(const char *value) {
    int n = strlen(value);

    char *r = malloc(n);

    int j;

    for (j = 0; j < n; j++) {
        r[j] = value[n - 1 - j];
    }

    r[n] = '\0';

    return r;
}
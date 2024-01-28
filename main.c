#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

#define TAX_RATE 0.3

void format(int n, char* result) {
    sprintf(result, "%d", n);
    int len = 0;
    while (result[len] != '\0') {
        len++;
    }
    for (int i = len - 1, count = 0; i >= 0; i--, count++) {
        if (count != 0 && count % 3 == 0) {
            for (int j = len + 1; j > i + 1; j--) {
                result[j] = result[j - 1];
            }
            result[i + 1] = ',';
            len++;
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Usage: %s <amount_after_tax>\n", argv[0]);
        return 1;
    }

    int after = atof(argv[1]);
    int required = ceil(after / (1 - TAX_RATE)); 

    char formattedAfter[20];
    char formattedRequired[20];

    format(after, formattedAfter);
    format(required, formattedRequired);

    printf("Required: %s\nAfter tax: %s", formattedRequired, formattedAfter);

    return 0;
}

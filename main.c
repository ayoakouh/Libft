#include <stdio.h>
#include <string.h>
#include "libft.h"

int main() {
    const char *original_string = "";
    char *duplicate_string = strdup(original_string);

    if (duplicate_string == NULL) {
        printf("Memory allocation failed.\n");
    } else {
        printf("Original string: %s\n", original_string);
        printf("Duplicate string: %s\n", duplicate_string);

    }

    return 0;
}

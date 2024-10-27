#include <stdio.h>
#include <bsd/string.h>
#include "libft.h"

// Function prototype for your implementation
size_t ft_strlcat(char *dest, const char *src, size_t size);

int main() {
    char buffer1[30]; // Buffer for original strlcat
    char buffer2[30]; // Buffer for ft_strlcat
    const char *first = "Hello, ";
    const char *last = "world! This is a test string.";
    size_t size = 20; // Size for both buffers

    // Initialize buffers
    strcpy(buffer1, first);
    strcpy(buffer2, first);

    // Use the original strlcat
    size_t result1 = strlcat(buffer1, last, size);
    
    // Use your implementation
    size_t result2 = ft_strlcat(buffer2, last, size);

    // Output results
    printf("Original strlcat:\n");
    printf("Resulting string: '%s'\n", buffer1);
    printf("Return value: %zu\n", result1);
    if (result1 >= size) {
        printf("String was truncated.\n");
    } else {
        printf("String was fully copied.\n");
    }

    printf("\nYour ft_strlcat:\n");
    printf("Resulting string: '%s'\n", buffer2);
    printf("Return value: %zu\n", result2);
    if (result2 >= size) {
        printf("String was truncated.\n");
    } else {
        printf("String was fully copied.\n");
    }

    return 0;
}


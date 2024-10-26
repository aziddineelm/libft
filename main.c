#include <stdio.h>
#include <ctype.h>
#include "libft.h" // Include your libft header for function prototypes

void test_isprint() {
    printf("Testing ft_isprint...\n");
    for (int i = -1; i <= 130; i++) {
        int result_original = isprint(i);
        int result_custom = ft_isprint(i);
        // Always print the results for both functions
        printf("Input: %d (char: '%c') - ", i, (i >= 0 && i <= 127) ? i : '?');
        printf("Original: %d, Custom: %d\n", result_original, result_custom);
    }
}

void test_isalnum() {
    printf("\nTesting ft_isalnum...\n");
    for (int i = -1; i <= 130; i++) {
        int result_original = isalnum(i);
        int result_custom = ft_isalnum(i);
        // Always print the results for both functions
        printf("Input: %d (char: '%c') - ", i, (i >= 0 && i <= 127) ? i : '?');
        printf("Original: %d, Custom: %d\n", result_original, result_custom);
    }
}

void test_isdigit() {
    printf("\nTesting ft_isdigit...\n");
    for (int i = -1; i <= 130; i++) {
        int result_original = isdigit(i);
        int result_custom = ft_isdigit(i);
        // Always print the results for both functions
        printf("Input: %d (char: '%c') - ", i, (i >= 0 && i <= 127) ? i : '?');
        printf("Original: %d, Custom: %d\n", result_original, result_custom);
    }
}

int main() {
   // test_isprint();
   // test_isalnum();
    test_isdigit();
    
    return 0;
}


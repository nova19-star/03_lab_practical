// Write a C program to print Multiplication table of 2 

#include <stdio.h>
int main() {
    int i;  // Declare an integer variable 'i' to use as a counter in the loop

    printf("Table of 2:\n");

    // Start a loop from 1 to 10 to print the multiplication table
    for (i = 1; i <= 10; i++) {  // Loop will run as long as 'i' is less than or equal to 10
        // Print the current multiplication result: 2 times 'i'
        printf("2 x %d = %d\n", i, 2 * i);  // %d is a format specifier for integers
    }

    return 0;
}

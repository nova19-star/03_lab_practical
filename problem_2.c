// Write a C program to print even numbers 

#include <stdio.h>

int main() 
{
    int i, a = 0, b = 100;  // Declare integer variables 'i' for the loop, 'a' for the start of the range, and 'b' for the end of the range
    printf("Even numbers between %d and %d are:\n", a, b);  // Print the range of even numbers

    // Loop through each number from 'a' to 'b'
    for (i = a; i <= b; i++) 
    {  // Start the loop with 'i' set to 'a' and run until 'i' is equal to 'b'
        if (i % 2 == 0) {  // Check if 'i' is even by using the modulus operator
            printf("%d\n", i);
        }
    }

    printf("%d\n");
    return 0; 
}
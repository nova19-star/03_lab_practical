// Write a C program to print leap years 

#include <stdio.h>

int main() {
    int startingyear, endyear;

    printf("Enter the start year: ");
    scanf("%d", &startingyear);
    printf("Enter the end year: ");
    scanf("%d", &endyear);

    printf("Leap years between %d and %d are:\n", startingyear, endyear);
    for (int year = startingyear; year <= endyear; year++) 
    {
        // A year is a leap year if it is divisible by 4,
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
        {
            printf("%d\n", year);
        }
    }

    return 0;
}

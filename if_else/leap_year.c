// 2. Write a C program to check whether a year is leap year or not. (Easy)
#include <stdio.h>

int main(void)
{
    int year = 0;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("%d is a leap year\n", year);
    }
    else if (year % 100 == 0)
    {
        printf("%d is not a leap year\n", year);
    }
    else if (year % 400 == 0)
    {
        printf("%d is a leap year\n", year);
    }
    else
    {
        printf("%d is a not leap year\n", year);
    }
}

// 4. Write a C program to count number of digits in a number using while loop. (Medium)

#include <stdio.h>

int main(void)
{
    int num = 0;
    printf("Number: ");
    scanf("%d", &num);

    int count = 0;
    while (num != 0)
    {
        num = num / 10; // divide the number by 10 and remove the last digit form the number using (int). (int) don't except float number it' remove the float number of a number.
         count++;
    }
    printf("%d\n", count);
}
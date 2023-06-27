// 5. Write a C program to calculate the product of the digits of a number. (Medium)

#include <stdio.h>

int main(void)
{
    int num = 0;
    printf("Number: ");
    scanf("%d", &num);

    int product = 1;
    while (num != 0)
    {
        int last_digit = num % 10;      // get the last digit of number
        product = product * last_digit; // product the digit
        num = num / 10;                 // remove the last digit of number | remove the number that calculate
    }
    printf("%d\n", product);
}
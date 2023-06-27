//  1. Write a program in C to read 10 numbers from the keyboard and find their average. (Easy)
#include <stdio.h>

int main(void)
{
    int n = 1;
    int sum = 0;
    int num = 0;

    while (n <= 10)
    {
        printf("Number: ");
        scanf("%d", &num);
        sum = sum + num;
        n++;
    }
    sum = sum / 10;
    printf("%d\n", sum);
}
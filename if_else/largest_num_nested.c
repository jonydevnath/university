// 7. Write a C program to find the largest of three numbers using nested if..else statements. (Medium)
#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    int num3;

    printf("Enter Your Number: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 < num2)
    {
        num1 = num2;

        if (num1 < num3)
        {
            num1 = num3;
        }
    }

    printf("\n%d eh o maior\n", num1);
}

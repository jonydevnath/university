// 3. Write a C program to input all sides of a triangle and check whether triangle is valid or not. (Easy)
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int a, b, c;
    printf("Enter sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c || b + c > a || a + c > b)
    {
        printf("triangle is valid\n");
    }
    else
    {
        printf("triangle is not valid\n");
    }
}

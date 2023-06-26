#include <stdio.h>
#include <ctype.h>

int main(void)
{
    //  4.	Write a C program to input any alphabet and check whether it is vowel or consonant.

    // char alpha;
    // scanf("%c", &alpha);

    // if (isupper(alpha))
    // {
    //     alpha = tolower(alpha);
    // }
    // if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u')
    // {
    //     printf("vowel\n");
    // }
    // else
    // {
    //     printf("consonant\n");
    // }

    // int year;
    // scanf("%d", &year);

    // 3.	Write a C program to input all sides of a triangle and check whether triangle is valid or not.

    int a, b, c;
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
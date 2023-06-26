#include <stdio.h>
#include <ctype.h>

int main(void)
{
    //    5. Write a C program to input any character and check whether it is alphabet, digit or special character.
    char charnum;
    scanf("%c", &charnum);

    if (isalpha(charnum))
    {
        printf("It's an ahphabat\n");
    }
    else if (isdigit(charnum))
    {
        printf("It's a digit\n");
    }
    else
    {
        printf("It's a spacial_character\n");
    }
}
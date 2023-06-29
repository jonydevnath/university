// 5. Write a C program to input any character and check whether it is alphabet, digit or special character. (Medium)
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char chr;
    printf("Enter character: ");
    scanf("%c", &chr);

    if (isalpha(chr))
    {
        printf("It's an ahphabat\n");
    }
    else if (isdigit(chr))
    {
        printf("It's a digit\n");
    }
    else
    {
        printf("It's a spacial_character\n");
    }
}

/*
    // write a C program to find character alphabat or not
    char chr;
    printf("Enter character: ");
    scanf("%c", &chr);

    if (chr >= 'a' && chr <= 'z' || chr >= 'A' && chr <= 'Z') // This condition work as like isalpha function
    {
        printf("alphabat\n");
    }
    else
    {
        printf("not alpha\n");
    }
*/

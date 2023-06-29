// 5. Write a C program to input any character and check whether it is alphabet, digit or special character. (Medium)
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char charnum;
    printf("Enter character: ");
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

/*
    // write a C program to find character alphabat or not
    char ch;
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') // This condition work as like isalpha function
    {
        printf("alphabat\n");
    }
    else
    {
        printf("not alpha\n");
    }

*/

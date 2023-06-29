// 4. Write a C program to input any alphabet and check whether it is vowel or consonant. (Easy)
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char alpha;
    printf("Enter a alphabet: ");
    scanf("%c", &alpha);

    if (isupper(alpha))
    {
        alpha = tolower(alpha);
    }
    if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u')
    {
        printf("vowel\n");
    }
    else
    {
        printf("consonant\n");
    }
}

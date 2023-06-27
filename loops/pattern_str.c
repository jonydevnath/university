// 8. Write a program in C to make such a pattern like a square using stars. The pattern like : (Hard)
// ****
// ****
// ****
// ****

#include <stdio.h>

int main(void)
{
    int num = 0;
    printf("Number of a Star: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) // print the row
    {
        for (int j = 0; j <= num; j++) // print the colume
        {
            printf("#"); // print the hash
        }
        printf("\n"); // print new line
    }
}
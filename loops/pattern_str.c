#include <stdio.h>

int main(void)
{
    int num = 0;
    printf("Number of a Star: ");
    scanf("%d", &num);

    // print the row
    for (int i = 0; i < num; i++)
    {
        // print the colume
        for (int j = 0; j <= num; j++)
        {
            printf("#"); // print the hash
        }
        printf("\n"); // print new line
    }
}
#include <stdio.h>

int main(void)
{
    int num = 0;
    // how many number your want to print
    printf("Number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}
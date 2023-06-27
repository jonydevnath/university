// 7. Write a program in C to make such a pattern with a number that will repeat a number in a row. The pattern like : (Hard)
//   1111
//   2222
//   3333
//   4444

#include <stdio.h>

int main(void)
{
    int num = 0;
    // how many number your want to print
    printf("Number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) // print the row
    {
        for (int j = 0; j < num; j++) // print the colume
        {
            printf("%d", i); // print the number
        }
        printf("\n"); // print the new line
    }
}
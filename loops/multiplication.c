// 3. Write a program in C to display the multiplication table for a given integer. (Easy)
#include <stdio.h>

int main(void)
{
    int num = 0;
    printf("Number: ");
    scanf("%d", &num);

    for (int i = 1; i <= 12; i++)
    {
        int multiple = num * i; // multiple the number given form the user with i. i get the value form the rotation of the loop; It will loop 12 time as question mention only 1 to 12;
        printf("%d*%d=%d", num, i, multiple);
        printf("\n");
    }
}
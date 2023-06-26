// 2. Write a C program to display the n terms of odd natural numbers and their sum. (Easy)
// 2. Write a C program to display the n terms of odd natural numbers and their sum. (Easy)

#include <stdio.h>

int main(void)
{
    int num = 0;
    printf("Number of n term: ");
    scanf("%d", &num);

    int odd_num = 0, sum = 0;
    printf("\nThe odd number are: ");

     
    for (int i = 1; i <= num; i++)
    {
        int odd_num = 2 * i - 1; //  2 * 3 - 1 = 6-1 = 5 
        sum = sum + odd_num;
        printf("%d ", odd_num);
    }
    printf("\nThe odd number sum: %d\n", sum);
}
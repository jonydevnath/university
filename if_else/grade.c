/*
6. Write a C program to obtain the given output: (Medium)
Enter your marks? 10
Sorry you are fail.
Enter your marks? 40
You scored grade C.
Enter your marks? 90
Congrats! you scored grade A.
*/
#include <stdio.h>

int main(void)
{
    int mark = 0;
    printf("Enter your mark: ");
    scanf("%d", &mark);

    if (mark <= 10)
    {
        printf("Sorry you are fail.\n");
    }
    else if (mark <= 40)
    {
        printf("You scored grade C.\n");
    }
    else if (mark <= 90)
    {
        printf("Congrats! you scored grade A.\n");
    }
    else
    {
        printf("Congrats! you scored grade A+.\n");
    }
}
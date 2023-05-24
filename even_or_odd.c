#include<stdio.h>

int main(void)
{
    printf("Enter Your Number: ");
    int num;
    scanf("%d", &num);

    if(num%2 == 0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }

}

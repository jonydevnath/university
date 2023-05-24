#include<stdio.h>

int main(void)
{
    printf("Enter num1 operator num2\n");
    int num1, num2;
    float result;
    char opertor;
    scanf("%d %c %d", &num1, &opertor, &num2);

    if(opertor == '+')
    {
       result = num1 + num2;
    }
    else if(opertor == '-')
    {
        result = num1 - num2;
    }
    else if(opertor == '*')
    {
        result = num1 * num2;
    }
    else if(opertor == '/')
    {
        if(num2 == 0)
        {
            printf("Undefine");
            return 0; // can be given in the exam; // code will given fix the error/ error code given fix the error/ question given write the code.
        }
        else
        {
            result = num1 / num2;
        }
    }
    else if(opertor == '%')
    {
        result = num1 % num2;
    }

    printf("Result: %f", result);

}

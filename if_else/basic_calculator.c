// write c program a Basic calculator.
#include <stdio.h>

int main(void)
{
    printf("Enter num1 operator num2\n");
    int num1, num2;
    float result;
    char opertor;
    scanf("%d %c %d", &num1, &opertor, &num2);

    if (opertor == '+')
    {
        result = num1 + num2;
    }
    else if (opertor == '-')
    {
        result = num1 - num2;
    }
    else if (opertor == '*')
    {
        result = num1 * num2;
    }
    else if (opertor == '/')
    {
        if (num2 == 0)
        {
            printf("Undefine");
            return 0; // return 0 what is means and what it do and it can use to cause a error in program. This kind of error can be given in the exam; // return 0 means stop the programe;
        }
        else
        {
            result = num1 / num2;
        }
    }
    else if (opertor == '%')
    {
        result = num1 % num2;
    }

    printf("Result: %f", result);
}

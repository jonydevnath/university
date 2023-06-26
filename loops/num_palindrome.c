#include <stdio.h>
#include <string.h>

int main(void)
{
    int num = 0;
    printf("Number: ");
    scanf("%d", &num);

    int copynum = num, reverse = 0, lastDigit = 0;

    while (num != 0)
    {
        lastDigit = num % 10;           // find the last digit
        reverse = reverse * 10;         // increse a place by one
        reverse = reverse + lastDigit;  // add the last digit with the incresed place revered number
        num = num / 10;                 // remove the last digit of sum
    }
 
    // printf("%d\n", reverse);

    if (copynum == reverse)
    {
        printf("The number is palindrome\n");
    }
    else
    {
        printf("The number is not palindrome\n");
    }
}

// what is the biggest defferent beetween CSE and student and other student 
// Other student try to avoid problem and we are looking for problem and try to sloved it.

// CSE students | programmers looks for problem and try solved it
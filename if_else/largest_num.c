// 1.	Write a C program to find the largest of three numbers. (Easy)
#include <stdio.h>

int main(void)
{
  int num1, num2, num3, max;
  printf("Enter Your Number: ");
  scanf("%d %d %d", &num1, &num2, &num3);

  if (num1 > num2)
  {
    max = num1;
  }
  else
  {
    max = num3;
  }

  if (num1 < num2)
  {
    max = num2;
  }
  else
  {
    max = num3;
  }
}

/*
// write a C program to find maximum between two numbers
#include <stdio.h>
int main(void)
{
  int num1 = 20;
  int num2 = 10;

  if (num1 > num2)
  {
    printf("%d\n", num1);
  }
  else if (num1 < num2)
  {
    printf("%d\n", num2);
  }
  else if (num1 = num1)
  {
    printf("Both are equal\n");
  }
}
*/
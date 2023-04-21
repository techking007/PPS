// write a program that defines a function to add first n numbers

#include <stdio.h>

int addition(int s1)
{
  int sum = 0, i;
  for (i = 1; i <= s1; i++)
  {
    sum = sum + i;
  }

  return sum;
}

int main()
{

  int x, result;
  scanf("%d", &x);
  result = addition(x);
  printf("%d\n", result);
  return 0;
}

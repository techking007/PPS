// Write a program to reverse string.

#include <stdio.h>

int main()
{
  char s1[1000], s2[1000];
  int x, y, count = 0;

  printf("Enter a string: ");
  scanf("%s", s1);

  // Calculating string length

  while (s1[count] != '\0')
    count++;

  y = count - 1;

  for (x = 0; x < count; x++)
  {
    s2[x] = s1[y];
    y--;
  }

  s2[x] = '\0';

  printf("Reverse String: %s\n", s2);

  return 0;
}

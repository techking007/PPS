// Convert string to upper case

#include <stdio.h>

int main()
{

  // variable
  char s[100];
  int i;

  // getting values
  printf("Enter a String: ");
  scanf("%s", s);

  for (i = 0; s[i] != '\0'; i++)
  {
    if (s[i] >= 'a' && s[i] <= 'z')
    {
      s[i] = s[i] - 32;
    }
  }
  printf("String in Upper case: %s\n", s);
  return 0;
}

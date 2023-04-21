#include <stdio.h>

int main()
{
  FILE *f1, *f2, *f3;
  int number, i, n = 10;

  printf("Contents of DATA file\n\n");

  f1 = fopen("DATA", "w");

  for (i = 0; i < n; i++)
  {
    scanf("%d", &number);
    if (number == -1)
    {
      break;
    }
    putw(number, f1);
  }
  fclose(f1);

  f1 = fopen("DATA", "r");
  f2 = fopen("ODD", "w");
  f3 = fopen("EVEN", "w");

  while ((number = getw(f1)) != EOF)
  {
    if (number % 2 == 0)
    {
      putw(number, f3);
    }
    else
    {
      putw(number, f2);
    }
  }

  fclose(f1);
  fclose(f2);
  fclose(f3);

  f2 = fopen("ODD", "r");
  f3 = fopen("EVEN", "r");

  printf("\n\n Contents of ODD file \n\n");

  while ((number = getw(f2)) != EOF)
  {
    printf("%d ", number);
  }

  printf("\n\nContents of EVEN file \n\n");

  while ((number = getw(f3)) != EOF)
  {
    printf("%d ", number);
  }

  fclose(f2);
  fclose(f3);
  return 0;
}

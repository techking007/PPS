// Write a C program to check whether the entered character is capital, small letter, digit or any special character.

#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        printf("Entered character '%c' is an Alphabet.\n", c);

    else if (c >= '0' && c <= '9')
        printf("Entered character '%c' is a Digit.\n", c);

    else
        printf("Entered character '%c' is a Special Character.\n", c);

    return 0;
}

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("The ascii value of the %c is : %d", ch, ch);
    return 0;
}
#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter the two number: ");
    scanf("%d %d", &num1, &num2);
    printf("The sum of %d and %d is %d", num1, num2, num1 + num2);
    return 0;
}
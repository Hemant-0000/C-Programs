#include <stdio.h>
int main()
{
    int a = 0, b = 1, sum, i, n;
    printf("Enter the n of elements:");
    scanf("%d", &n);
    printf("%d %d", a, b);  // printing 0 and 1
    for (i = 2; i < n; ++i) // loop starts from 2 because 0 and 1 are already printed
    {
        sum = a + b;
        printf(" %d", sum);
        a = b;
        b = sum;
    }
    return 0;
}
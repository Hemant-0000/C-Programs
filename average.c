#include <stdio.h>

int main()
{
    int n1, n2, n3;
    int avg;
    printf("ENTER THREE NUMBERS: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    avg = (n1 + n2 + n3) / 3;
    printf("AVERAGE: %d", avg);
    return 0;
}
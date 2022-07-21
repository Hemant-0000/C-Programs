#include <stdio.h>
#include <math.h>

int main()
{
    int a, n, r;
    float sum = 0;

    printf("Enter First Number of an G.P Series:  ");
    scanf("%d", &a);
    printf("Enter the Total Numbers in this G.P Series:  ");
    scanf("%d", &n);
    printf("Enter the Common Ratio:  ");
    scanf("%d", &r);

    sum = (a * (1 - pow(r, n))) / (1 - r);

    printf("The Sum of Geometric Progression Series =  %.2f", sum);
    return 0;
}
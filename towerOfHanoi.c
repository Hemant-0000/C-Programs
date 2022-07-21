#include <stdio.h>
 
int counter = 0;
 
void move(int n, char src, char helper, char dest)
{
        //base case
        if(n == 0)
                return;
 
        //incrementing the counter
        counter++;
        //recursive case
        //move N - 1 disks to the helper
 
        move(n - 1, src, dest, helper);
        printf("Shift disk %d from %c to %c\n", n,src, dest);
        move(n - 1, helper, src, dest);
}
 
int main()
{
        int n;
        printf("Enter the number of disks\n");
        scanf("%d", &n);
 
        move(n, 'A', 'C', 'B');
        printf("Total number of iterations required are: %d\n", counter);
 
        return 0;
}
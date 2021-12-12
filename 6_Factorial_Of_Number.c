#include<stdio.h>

// 6. Write a program to calculate the factorial of a number.

int main()
{
    unsigned int n,i;
    unsigned long r;
    printf("\nEnter the number for Calculating its Factorial: ");
    scanf("%u",&n);

    for(r=1,i=1;i<=n;i++)
    r=r*i;
    printf("\nThe Factorial of %u is %lu\n\n", n,r);
    return 0;
    
}
// Write a program to print the first N natural numbers.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    return 0;
}
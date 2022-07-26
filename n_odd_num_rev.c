// Write a program to print the first N odd natural numbers in reverse order.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number");
    scanf("%d", &n);

    for (int i = n; i > 0; i--)
    {
        printf("%d ", i * 2 - 1);
    }
    return 0;
}
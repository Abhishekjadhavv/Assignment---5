// Write a program to print the first N even natural numbers in reverse order

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);

    for (int i = n; i > 0; i--)
    {
        printf("%d ", i * 2);
    }

    return 0;
}
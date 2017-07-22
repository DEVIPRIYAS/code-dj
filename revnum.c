#include <stdio.h>
int main()
{
    int n, reversed num = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n != 0)
    {
        remainder = n%10;
        reversed num = reversed num*10 + remainder;
        n /= 10;
    }

    printf("Reversed num = %d", reversed num);

    return 0;
}

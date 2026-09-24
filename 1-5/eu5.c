#include <stdio.h>

int gcd(int a, int b);

int main()
{
    int result = 1;

    for(int i = 2; i <= 20; i++)
    {
        result = result / gcd(result, i) * i;
    }

    printf("%d\n", result);

    return 0;
}

int gcd(int a, int b)
{
    while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
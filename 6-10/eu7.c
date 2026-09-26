#include <stdio.h>

int isPrime(int n);

int main()
{
    int count = 0;
    int n = 1;

    while (count < 10001)
    {
        n++;
        if(isPrime(n))
            count++;
    }
    
    printf("%d", n);

    return 0;
}

int isPrime(int n)
{
    if(n < 2)
        return 0;

    for(int i = 2; (long)i * i <= n; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}
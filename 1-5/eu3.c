#include <stdio.h>

int main()
{
    long long num = 600851475143;
    long long div = 2;
    
    while(div * div <= num)
    {
        if(num % div == 0)
        {
            num = num/div;
        }
        else
        {
            div++;
        }
    }

    printf("The largest prime factor: %lld \n", num);

    return 0;
}
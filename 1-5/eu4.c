#include <stdio.h>

int isPalindrome(int n);

int main()
{
    int max = 0, x = 0, y = 0;
    
    for(int i = 999; i >= 100; i--)
    {
        for(int j = i; j >= 100; j--)
        {
            int k = i * j;

            if(k <= max)
            {
                break;
            }
            
            if(isPalindrome(k))
            {
                max = k;
                x = i;
                y = j;
            }
        }
    }

    printf("%d = %d x %d", max, x, y);

    return 0;
}

int isPalindrome(int n)
{
    int reversed = 0;
    int remaining = n;

    while(remaining > 0)
    {
        reversed = reversed * 10 + remaining % 10;
        remaining /= 10;
    }
    return reversed == n;
}
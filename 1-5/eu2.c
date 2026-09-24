#include <stdio.h>

int main()
{
    int n = 0, t1 = 0, t2 = 1, nt = 0, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        if(t1 % 2 == 0)
        {
            sum += t1;
        }
        
        nt = t1 + t2;
        t1 = t2;
        t2 = nt;
    }
    printf("The result is %d \n", sum);

    return 0;
}
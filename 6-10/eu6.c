#include <stdio.h>

int main()
{
    int sum_of_the_squares = 0;
    int square_of_the_sum  = 0;

    for(int i = 1; i < 101; i++)
    {
        sum_of_the_squares  += i * i;
        square_of_the_sum = i * (i + 1) / 2;
        square_of_the_sum = square_of_the_sum * square_of_the_sum;
    }

    printf("%d\n", square_of_the_sum - sum_of_the_squares);

    return 0;
}
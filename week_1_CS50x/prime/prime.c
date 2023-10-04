#include <cs50.h>
#include <stdio.h>

bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    } 
    while (min >= max);
    
    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{
    // TODO
    // Check if any number has a remainder, if
    // when divide by any lower number gives no remainder
    // then it is not prime.

    // number
    int div_num = 2;
    int is_remain;

    if (number == 1)
    {
        return false;
    }

    for (int k = div_num; k < number; k++)
    {
        is_remain = number % div_num;

        // printf("inside for bool prime number %i divide in %i\n", number,div_num);
        // printf("\t \t remain = %i\n", is_remain);

        if (is_remain == 0) // is not prime if equal 0
        {
            // printf("¡¡¡FALSE!!! \n");
            return false;
        }

        div_num++;
    }

    return true;
}

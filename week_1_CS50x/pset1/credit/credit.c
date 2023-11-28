#include <cs50.h>
#include <stdio.h>

long ask_card_number(void);
int checksum_number(long n);

int main(void) 
{
    long number = ask_card_number();

    int total_sum = checksum_number(number);

    printf("%i", total_sum);
}

// Ask for the credit card number
long ask_card_number(void)
{
    long card_number;

    do
    {
        card_number = get_long("Number: ");
    }
    while (card_number < 0);

    return card_number;
}

// Checksum Number

int checksum_number(long n)
{
    int digit_by_2;
    int digit;
    int sum_digit = 0;
    int sum_digit_by_2 = 0;
    int is_2_digit;
    int counter_digits = 0;

    while (n > 0)
    {
        sum_digit = sum_digit + (n % 10);

        // Count The number of digits in the given number
        counter_digits = counter_digits + 1;

        n = n / 10;

        if (((n % 10)*2) > 9)
        {
            // TODO
            // if number has two digits the sum
            // should be digit + digit

            int h = ((n % 10)*2);
            int first_digit;
            int second_digit;
            int total_2_digit;

            first_digit= h % 10;

            h = h / 10;
            second_digit = h % 10;

            total_2_digit = first_digit + second_digit;

            sum_digit_by_2 = sum_digit_by_2 + total_2_digit;
        }
        else
        {
            sum_digit_by_2 = sum_digit_by_2 + ((n % 10)*2);
        }

        // Count The number of digits in the number
        counter_digits = counter_digits + 1;

        n = n / 10;
    }

    return (sum_digit + sum_digit_by_2);
}

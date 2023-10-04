// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

#include <cs50.h>
#include <stdio.h>

/*
 * first calculate percent of tip
 * second calculate percent of tax
 * third divide by 2
 */

/*
 * tip percent:
 * (bill * percent_tip)
 */

/*
 * tax percent:
 * ( (bill * percent_tip) * tax_percent )
 */

/*
 * divide by 2:
 * ( ( (bill * percent_tip) * tax_percent ) / 2 )
 */

float half(float bill, float tax, int tip);

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");

    printf("You will owe $%.2f each!\n", half(bill_amount, tax_percent, tip_percent));
}

// TODO: Complete the function
float half(float bill, float tax, int tip)
{
    // Add (float) before the variable name when you use,
    // to Make the number variable int to float.

    float decimal_tip = (1 + ((float) tip / 100));
    // printf("tip in decimal %f \n", decimal_tip);

    float bill_with_tip = (bill * decimal_tip);
    // printf("bill with tip %f \n", bill_with_tip);

    float decimal_tax = (1 + ((float) tax / 100));
    // printf("decinal tax %f \n", decimal_tax);

    float total_bill = (bill_with_tip * decimal_tax);
    // printf("total of bill %f \n", total_bill);

    float total_bill_by_half = (total_bill / 2);
    return total_bill_by_half;

    // return 0.0;
}

#include <cs50.h>
#include <stdio.h>


int main (void)
{
    int x = get_int(" X: ");
    int y = get_int(" Y: ");

    printf("Module of %i and %i", x,y);

    int Module_x_y = x % y;

    printf(" is %i", Module_x_y);
}

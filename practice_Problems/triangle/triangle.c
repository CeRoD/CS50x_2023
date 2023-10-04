#include <cs50.h>
#include <stdio.h>

/*
**
*/

float valid_triangle (int a, int b, int c);

int main (void)
{
    int a;
    do
    {
        a = get_int("a: ");
    }
    while (a <= 0);

    int b;
    do
    {
        b = get_int("b: ");
    }
    while (b <= 0);

    int c;
    do
    {
        c = get_int("c: ");
    }
    while (c <= 0);

    //
    // verifying if is a triangle
    //

    float x = valid_triangle( a, b, c);

    if ( x == 1 )
    {
        printf("It is a valid trinagle.");
    }
    else
    {
        printf( "It is not a triangle");
    }

}

    /* -- Valid_triangle --
    **
    ** a + b > c
    ** b + c > a
    ** a + c > b
    **
    */

float valid_triangle (int a, int b, int c)
{
    if ( a + b >= c )
    {
        printf("first if. \n");

        // b + c >= a
        if ( b + c >= a)
        {
            printf("second if. \n");

            // a + c >= b
            if ( a + c >= b )
            {
                printf("Third if. \n");
                return 1;
            }
        }
    }
    else
    {
        return 0;
    }
}

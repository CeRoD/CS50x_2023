#include <cs50.h>
#include <math.h>
#include <stdio.h>

/*   n ==> total population
 *   n/3 ==> New born
 *   n/4 ==> pass away
 *   We can’t have a decimal portion of population, though,
 *   so we’ll truncate the decimal
 *   333.33 to ==> 333 */

/*  n ==> Start_Population
 *  b ==> New_Born
 *  p ==> Pass_away
 *    Total_population = n + b - p  */

/*  Complete the implementation of *population.c*,
 *  such that it calculates the number of years
 *  required for the population to grow from
 *  the start size to the end size. */

int years;
int size_population;
int b;
int p;

int main(void)
{
    // TODO: Prompt for start size

    int s;
    do
    {
        s = get_int("Start size: ");
    }
    while (s < 9);

    // TODO: Prompt for end size

    int e;
    do
    {
        e = get_int("End size: ");
    }
    while (s > e);

    // TODO: Calculate number of years until we reach threshold

    b = size_population / 3;

    p = size_population / 4;

    size_population = s + b - p;

    while (size_population < e)
    {
        years++;

        // printf("Years: %i \n", years);

        b = size_population / 3;

        p = size_population / 4;

        size_population = size_population + b - p;

        // printf("Size population: %i \n", size_population);
    }

    // TODO: Print number of years
    //
    printf("Years: %i \n", years);
}

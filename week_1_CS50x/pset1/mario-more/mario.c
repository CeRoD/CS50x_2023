#include <cs50.h>
#include <stdio.h>

int get_height(void);
void build_pyramid(int n);
void print_hashes (int n);

int main(void) 
{
    int height = get_height();
    build_pyramid(height);
}

// Ask for the height.
int get_height(void)
{
    int given_height;

    do
    {
        given_height = get_int("Height: ");
    }
    while (given_height < 1 || given_height > 8);

    return given_height;
}

// Build Pyramid

void build_pyramid(int n)
{
    int number_spaces;

    for (int i = 1; i <= n; i++)
    {
        number_spaces = n - i;

        for (int j = number_spaces; j > 0; j--)
        {
            printf(" ");
        }

        print_hashes(i);

        printf("  ");

        print_hashes(i);

        printf("\n");
    }
}

// function to just print hashes
void print_hashes (int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
}

#include <cs50.h>
#include <stdio.h>

int ask_height(void);
void print_pyramid(int n);

int main(void) 
{
    int height = ask_height();
    print_pyramid(height);
}

// Function ask user for the height.

int ask_height(void)
{
    int given_height;

    do
    {
        given_height = get_int("Height: ");
    }
    while (given_height < 1 || given_height > 8);
    return given_height;
}

// function that prints pyramid

void print_pyramid(int height)
{
    int num_spaces;
    int num_hashes;

    for (int i = 1; i <= height; i++)
    {
        num_spaces = height - i;
        num_hashes = height - num_spaces;

        for (int j = num_spaces; j > 0; j--)
        {
            printf(" ");
        }

        for (int k = 0; k < num_hashes; k++)
        {
            printf("#");
        }

        printf("\n");
    }
}

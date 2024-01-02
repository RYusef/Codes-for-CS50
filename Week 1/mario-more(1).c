#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get Height of Bricks
    int n;
    do
    {
        n = get_int("Height: ");
    }
    // Limited input 1-8
    while (n < 1 || n > 8);

    // Print Pyramid with given Height
    for (int i = 0; i < n; i++)
    {
        // Space = Height - Row - 1
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        // Column <= Row
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        // Gap between two Pyramids
        {
            printf("  ");
        }
        // Second Pyramid of Same Height, Opposite Slant
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

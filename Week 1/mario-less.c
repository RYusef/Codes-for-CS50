#include <cs50.h>
#include <stdio.h>

int get_height(void);
void print_grid(int n);

int main(void)
{
    int n = get_height();
    print_grid(n);
}

int get_height(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    return n;
}
void print_grid(int n)
{
    // n = Height, i = Row, j = Space, k = Column
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Start Size:
    int start;
    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9);
    //End SIze:
    int end;
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);
    //calculation Of Years:
    int years = 0;
    while (start < end)
    {
        start = start + (start / 3) - (start / 4);
        years++;
    }
    //Print Amount Of Years:
    {
        printf("Years: %i\n", years);
    }

}

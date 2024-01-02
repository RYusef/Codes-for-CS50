#include <cs50.h>
#include <stdio.h>

bool isPalindrome(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    for (int i = min; i <= max; i++)
    {
        if (isPalindrome(i))
        {
            printf("%i\n", i);
        }
    }
}

bool isPalindrome(int number)
{
    // TODO
    int originalNumber = number;
    int reversedNumber = 0;

    while (number > 0)
    {
        int remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    return originalNumber == reversedNumber;
}

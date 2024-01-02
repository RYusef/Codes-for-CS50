#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // Get user input
    string message = get_string("Message: ");

    // Go through each character in input string
    for (int i = 0; i < strlen(message); i++)
    {
        // Convert the character to an unsigned char
        unsigned char byte = message[i];

        // Go through each bit in the byte from left to right
        for (int j = BITS_IN_BYTE - 1; j >= 0; j--)
        {
            // Extract the j bit with bitwise operations
            int bit = (byte >> j) & 1;
            print_bulb(bit);
        }
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}

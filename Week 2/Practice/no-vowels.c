// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

string replace(string input);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Lewra Choda Command Line Argument Keda Dibo\n");
        return 124;
    }

    string word = argv[1];
    string result = replace(word);
    printf("Vowel Chara Tmr Lewra: %s\n", result);
    return 0;
}

string replace(string input)
{
    string output = input;
    for (int i = 0; i < strlen(input); i++)
    {
        char c = tolower(input[i]);

        switch (c)
        {
            case 'a':
                output[i] = '6';
                break;

            case 'e':
                output[i] = '3';
                break;

            case 'i':
                output[i] = '1';
                break;

            case 'o':
                output[i] = '0';
                break;

            default:
                output[i] = input[i];
                break;
        }
    }

    return output;
}

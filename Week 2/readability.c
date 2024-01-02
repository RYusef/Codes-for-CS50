#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);
int calculate_index(int letters, int words, int sentences);

int main(void)
{
    string text = get_string("Text: ");

    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    int index = calculate_index(letters, words, sentences);
    if (index < 1)
    {
        printf("Before Grade 1");
    }

    else if (index >= 16)
    {
        printf("Grade 16+");
    }

    else
    {
        printf("Grade %i", index);
    }

    printf("\n");
}

// Number of Letters
int count_letters(string text)
{
    int letters = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
            letters++;
    }
    return letters;
}

// Number of Words
int count_words(string text)
{
    int words = 1;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == ' ')
            words++;
    }
    return words;
}

// Number of Sentence
int count_sentences(string text)
{
    int sentences = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
            sentences++;
    }
    return sentences;
}

// Calculation Coleman-Liau index
int calculate_index(int letters, int words, int sentences)
{
    float calculation = (0.0588 * letters / words * 100) - (0.296 * sentences / words * 100) - 15.8;
    return round(calculation);
}

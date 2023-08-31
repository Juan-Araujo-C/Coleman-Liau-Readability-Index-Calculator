#include <stdio.h>
#include <math.h>
#include <string.h>

// Define the 'string' type using an alias
typedef char *string;

// Function prototypes
int count_letters(string word);
int count_words(string text);
int count_sentences(string sentence);

int main(void)
{
    char txt[1000]; // Change the size according to your needs

    printf("Text: ");
    fgets(txt, sizeof(txt), stdin);
    txt[strlen(txt) - 1] = '\0'; // Remove the newline captured by fgets

    // Calculate the numbers of letters, words, and sentences in the text.
    int letters = count_letters(txt);
    int words = count_words(txt);
    int sentences = count_sentences(txt);

    // Calculate the average number of letters and sentences per 100 words (L and S values).
    float L = (float) letters / words * 100;
    float S = (float) sentences / words * 100;

    // Calculate the Coleman-Liau index for the text.
    float index = 0.0588 * L - 0.296 * S - 15.8;

    // Round the index to the nearest integer to get the grade level.
    int grade = (int) round(index);

    // Determine the grade level and print the result.
    if (grade > 1 && grade <= 16)
    {
        printf("Grade %i\n", grade);
    }
    else if (grade > 16)
    {
        printf("Grade 16+\n");
    }
    else if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    return 0;
}

// Function to count the number of letters in a word.
int count_letters(string word)
{
    int count = 0;
    for (int i = 0; word[i] != '\0'; i++)
    {
        char letter = word[i];
        if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
        {
            count++;
        }
    }
    return count;
}

// Function to count the number of words in a text.
int count_words(string text)
{
    int count = 1;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == ' ')
        {
            count++;
        }
    }
    return count;
}

// Function to count the number of sentences in a text.
int count_sentences(string sentence)
{
    int count = 0;

    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] == '.' || sentence[i] == '!' || sentence[i] == '?')
        {
            count++;
        }
    }
    return count;
}
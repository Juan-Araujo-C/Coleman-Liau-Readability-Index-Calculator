# Coleman-Liau-Readability-Index-Calculator
C program that calculates readability using the Coleman-Liau index based on letters, words, and sentences. Provides a grade-level estimate for text comprehension.
Coleman-Liau Readability Index Calculator

This C program calculates the Coleman-Liau readability index for a user-inputted text. The Coleman-Liau index is a measure that estimates the reading difficulty of a text based on the quantity of letters, words, and sentences present.

- The program prompts the user to input a text and then proceeds to perform the following steps:
- Calculates the number of letters, words, and sentences in the text.
- Computes the L and S values, representing the average number of letters and sentences per 100 words.
- Using the formula 0.0588 * L - 0.296 * S - 15.8, calculates the Coleman-Liau index.
- Rounds the index to derive a grade level.
- Prints the corresponding grade level based on the calculated index.
- This code employs functions to count letters, words, and sentences in the text, enabling the evaluation of the text's readability complexity. The result provides an estimation of the educational level required to comprehend the text, expressed in a grade level.

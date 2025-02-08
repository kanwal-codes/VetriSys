#ifndef CORE_H
#define CORE_H

#define MAX_SIZE 1300  // Maximum size limit for data arrays or buffers

// Clears the standard input buffer to prevent unwanted input carryover
void clearInputBuffer(void);

// Pauses program execution until the user presses the "enter" key
void suspend(void);

// Prompts the user to enter an integer and returns it
int inputInt(void);

// Prompts the user to enter a positive integer and returns it
int inputIntPositive(void);

// Prompts the user to enter an integer within specified bounds and returns it
int inputIntRange(int lowerBound, int upperBound);

// Prompts the user to enter a character from a list of valid options and returns it
char inputCharOption(const char validChar[]);

// Prompts the user to enter a C string within specified length constraints
void inputCString(char* userInput, int minChars, int maxChars);

// Displays a formatted phone number if valid, otherwise shows a placeholder
void displayFormattedPhone(const char* phoneNum);

#endif // !CORE_H

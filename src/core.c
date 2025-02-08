#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "core.h"

// Clears the standard input buffer
void clearInputBuffer(void)
{
	while (getchar() != '\n')
	{
		;
	}
}

// Pauses the program until the user presses <ENTER>
void suspend(void)
{
	printf("<ENTER> to continue...");
	clearInputBuffer();
	putchar('\n');
}

// Reads and returns a whole number from the user
int inputInt(void)
{
	char newLine = 'x';
	int value, validInput;
	do
	{
		validInput = 1;
		scanf("%d%c", &value, &newLine);
		if (newLine != '\n')
		{
			clearInputBuffer();
			printf("Error! Input a whole number: ");
			validInput = 0;
		}
	} while (!validInput);

	return value;
}

// Reads and returns a positive integer from the user
int inputIntPositive(void)
{
	int intInput, validInput;
	do
	{
		validInput = 1;
		intInput = inputInt();
		if (!(intInput > 0))
		{
			printf("ERROR! Value must be > 0: ");
			validInput = 0;
		}
	} while (!validInput);

	return intInput;
}

// Reads and returns an integer within the specified range from the user
int inputIntRange(int lowerBound, int upperBound)
{
	int intInput, validInput;
	do
	{
		validInput = 1;
		intInput = inputInt();
		if (intInput < lowerBound || intInput > upperBound)
		{
			printf("ERROR! Value must be between %d and %d inclusive: ", lowerBound, upperBound);
			validInput = 0;
		}
	} while (!validInput);

	return intInput;
}

// Reads and returns a character that matches one of the valid characters
char inputCharOption(const char validCharacters[])
{
	char singleChar = 0;
	int valid, i;

	valid = 0;

	singleChar = getchar();
	for (i = 0; (validCharacters[i] != '\0') && !valid; i++)
	{
		if (singleChar != validCharacters[i])
		{
			valid = 0;
			clearInputBuffer();
			printf("ERROR: Character must be one of [%s]: ", validCharacters);
			singleChar = getchar();
		}
		else
		{
			valid = 1;
		}
	}

	return singleChar;
}

// Reads and returns a C string within the specified length constraints
void inputCString(char* userInput, int minChars, int maxChars)
{
	int validInput, strLen;
	char cString[MAX_SIZE + 1] = { 0 };
	char fmt[MAX_SIZE + 1] = { 0 };
	do
	{
		validInput = 1;
		sprintf(fmt, "%%%d[^\n]", MAX_SIZE);
		scanf(fmt, cString);
		clearInputBuffer();

		strLen = strlen(cString);
		if ((minChars == maxChars) && (strLen < minChars || strLen > maxChars))
		{
			validInput = 0;
			printf("ERROR: String length must be exactly %d chars: ", minChars);
		}
		else if (strLen < minChars)
		{
			validInput = 0;
			printf("ERROR: String length must be between %d and %d chars: ", minChars, maxChars);
		}
		else if (strLen > maxChars)
		{
			validInput = 0;
			printf("ERROR: String length must be no more than %d chars: ", maxChars);
		}
	} while (!validInput);

	if (userInput != NULL)
	{
		strcpy(userInput, cString);
	}
}

// Displays a formatted phone number if valid, otherwise displays a placeholder
void displayFormattedPhone(const char* phoneNum)
{
	int validPhonenum = 0, onlyDigits = 1, i;

	if (phoneNum != NULL)
	{
		for (i = 0; phoneNum[i] != '\0'; i++)
		{
			if (!isdigit(phoneNum[i]))
			{
				onlyDigits = 0;
			}
		}
		if (i == 10)
		{
			validPhonenum = 1;
		}
	}
	if ((onlyDigits == 1) && (validPhonenum == 1))
	{
		printf("(%.3s)%.3s-%.4s", &phoneNum[0], &phoneNum[3], &phoneNum[6]);
	}
	else
	{
		printf("(___)___-____");
	}
}

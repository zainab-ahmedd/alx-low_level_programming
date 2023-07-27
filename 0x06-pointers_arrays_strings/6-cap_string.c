#include <stdio.h>
#include "main.h"
/**
 * *cap_string - Entry point
 *
 * *cap_string - capitalizes all words of a string.
 * @c: string to be cap
 * Return: 0 (Success)
*/
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] <= 122 && c[i] >= 97)
		{
			if (i == 0 || c[i - 1] == ' ' || c[i - 1] == '\t'
			|| c[i - 1] == '(' || c[i - 1] == ')' || c[i - 1] == '{'
			|| c[i - 1] == '}' || c[i - 1] == '\n' || c[i - 1] == '"'
			|| c[i - 1] == ',' || c[i - 1] == ';' || c[i - 1] == '.'
			|| c[i - 1] == '!' || c[i - 1] == '?')
			{
				c[i] = c[i] - 32;
			}
		}
	}
	return (c)
}

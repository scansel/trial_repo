#include <stdio.h>

/**
 * main - prints the alphabets in lovercase
 * followed by new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 0; ch < 10; ch++)
	{
		printf("%d", ch);
	}
	while( ch > 'a')
	{
		printf("i am not done");
	}
	
	int cch;

        for (cch = 0; cch < 10; cch++)
        {
                printf("%d", cch);
        }
        while( cch > 'a')
        {
                printf("i am not done");
        }
	return (0);

}

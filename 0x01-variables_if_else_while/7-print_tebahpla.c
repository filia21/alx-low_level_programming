#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - entry point
 * RETURN : Always 0 (Success)
 */
int main(void)
{
	char tmp;

	for (tmp = 'z'; tmp >= 'a'; tmp--)

		putchar(tmp);

	putchar('\n');

	return (0);

}

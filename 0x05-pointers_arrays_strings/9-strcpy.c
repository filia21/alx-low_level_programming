/**
 * *_strcpy - function to copy strings
 * @dest: the first parameter
 * @src: second pointer parameter
 * Return: charater
 */

char *_strcpy(char *dest, char *src)
{
	char *aux = dest;

	while (*src)
		*dest++ = *src++;
	return (aux);
}

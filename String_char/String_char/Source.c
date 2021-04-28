#include <stdio.h>
#include <ctype.h>
int main()
{
	char line[80];
	gets(line);
	char compressed_line = Compressed(line);
	printf("%s", compressed_line);
	return 0;
}
char Compressed(char line)
{
	char* cps = line, * read = line;
	do {
		if (*read != ' ')
			*cps++ = *read;
	} while (*read++);
	return cps;
}
#include <stdio.h>
#include <stdlib.h>
#define MAX 80
#pragma warning(disable : 4996)

int main(void)
{
	FILE* fptr;
	char str[MAX];
	int bytes;
	fptr = fopen("d://output.txt", "r");
	while (!feof(fptr))
	{
		bytes = fread(str, sizeof(char), MAX - 1, fptr);
		str[bytes] = '\0';
		printf("%s\n",str);
	}
	fclose(fptr);
	system("pause");
		return 0;
}
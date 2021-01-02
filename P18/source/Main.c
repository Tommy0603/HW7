#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main(void)
{
	FILE* in, * out;
	int cnt;
	char str[100];
	in= fopen("d://weclome.txt", "r");
	out = fopen("d://output.txt", "w");
	while (!feof(in))
	{
		cnt = fscanf(in, "%s\n", str);
		if (cnt > 0)
			fprintf(out, "%s\n", str);
	}
	fclose(in);
	fclose(out);
	system("pause");
	return 0;
}
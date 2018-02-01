#include <stdio.h>

void funkcja(int *ws, int n);

int main()
{
	FILE *ws;
	ws = fopen("file_root", "w");
	int n = 5;

	funkcja(ws, n);

	return 0;
}

void funkcja(int * ws, int n)
{
	char line[100];
	int i;

	printf("%d\n", n);

	for(i = 1; i<=n; i++)
	{
		gets(line);
		fprintf(ws, "%s\n", line);
	}

	fclose(ws);

	return;
}




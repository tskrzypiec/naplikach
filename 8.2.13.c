#include <stdio.h>

void funkcja( int ws1, int ws2);

int main()
{
	FILE *ws1;
	FILE *ws2;
	ws1 = fopen("root_1", "r");
	ws2 = fopen("root_2", "w");

	funkcja(ws1, ws2);

	return 0;
}

void funkcja( int ws1, int ws2)
{

	char line[100];

	while(feof(ws1)!=1)
	{
		fgets(line, 100, ws1);
		fputs(line, ws2);
	}

	fclose(ws1);
	fclose(ws2);

	return;
}

#include <stdio.h>

void funkcja(char *nazwa1, char *nazwa2);

int main()
{
	char *nazwa1 = {"root_1"};
	char *nazwa2 = {"root_2"};

	funkcja(nazwa1, nazwa2);

	return 0;
}

void funkcja(char *nazwa1, char *nazwa2)
{
	FILE *ws1;
	FILE *ws2;
	ws1 = fopen(nazwa1, "r");
	ws2 = fopen(nazwa2, "a");

	char linia[100];

	while(feof(ws1)!=1)
	{
		fgets(linia,100,ws1);
		fputs(linia, ws2);
	}

	fclose(ws1);
	fclose(ws2);

	return;
}

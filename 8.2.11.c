#include <stdio.h>

int plik(char *nazwa);

int main()
{
	char *nazwa = {"file_root"};
	int ws;

	ws = plik(nazwa);

	fprintf(ws, "\nTo wszystko\n");

	fclose(ws);

	return 0;
}

int plik(char *nazwa)
{
	FILE *ws;
	ws = fopen(nazwa, "a");

	return ws;
}

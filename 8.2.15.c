#include <stdio.h>

void funkcja(int *tab, int i, char *nazwa);

int main()
{
	int i = 5;
	int tab[5] = {3, 6, 8, 9, 23};
	char *nazwa = {"root"};

	funkcja(tab, i, nazwa);

	return 0;
}

void funkcja(int *tab, int i, char *nazwa)
{
	FILE *ws;
	ws = fopen(nazwa, "a");
	int n;

	for(n = 0; n<i; n++)
	{
		fprintf(ws, "%d\n", tab[n]);
	}

	return;
}

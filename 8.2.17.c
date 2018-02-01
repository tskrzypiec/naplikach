#include <stdio.h>

void funkcja(char *nazwa, int *tab, int n);

int main()
{

	char *nazwa = {"file_root"};
	int tab[3] = {0, 1, 2};
	int n = 3;

	funkcja(nazwa, tab, n);

	return 0;
}

void funkcja(char *nazwa, int *tab, int n)
{
	FILE *ws;
	ws = fopen(nazwa, "wb");

	fwrite(tab,sizeof(tab),1,ws);
	fread(tab,sizeof(tab),1,ws);

	int i;

	for(i = 0; i<=n; i++)
	{
		printf("%d\n", tab[i]);
	}

	fclose(ws);

	return;
}

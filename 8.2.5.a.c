#include <stdio.h>
#include <string.h>

void plik(char *nazwa);

int main()
{
	char *nazwa = {"file_root"};

	plik(nazwa);

	return 0;
}

void plik(char *nazwa)
{
	int ctr, i;
	i =0;
	char linia[100];
	int ile[256] = {0};

	FILE *ws;
	ws = fopen(nazwa, "r");

	while(fgets(linia, 100, ws) != NULL)
	{
		for(ctr = 0; ctr<strlen(linia); ctr++)
		{
			ile[(int)(linia[ctr])]++;
		}

	}

for(i = 0; i<256; i++)
{
printf("Znaków %c jest %d\n", (char)i, ile[i]);
}

return;

}

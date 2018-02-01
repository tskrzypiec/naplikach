#include <stdio.h>
#include <stdlib.h>

int plik(char *nazwa);

int main()
{
	char *nazwa = {"ścieszka"};
	plik(nazwa);
	return 0;
}

int plik (char *nazwa)
{

	char linia[100];
	char linia2[100];
	int ctr, i;

	printf("Nazwa pliku to: %s\n", nazwa);
	FILE *deskryptor;

	deskryptor = fopen(nazwa, "r");

	if (fopen == 0)
	{
		printf("Błąd, brak dostępu do pliku\n");
		exit(1);
	}

	while(feof(deskryptor)==0)
	{
	fgets(linia, 100, deskryptor);
		i = 0;
		for(ctr = 0; ctr<100; ctr++)
		{
			if(linia[ctr]!=' ')
			{
				linia2[i] = linia[ctr];
				i++;
			}
		}
	if(feof(deskryptor)==0)
	{
		printf("%s", linia2);
	}
	}
	fclose(deskryptor);
	return;
}

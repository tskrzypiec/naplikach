#include <stdio.h>

FILE *deskryptor;

void plik(int deskryptor);

int main()
{

	deskryptor = fopen("ścieszka_do_pliku", "r");

	if (fopen == 0)
	{
		printf("Błąd czytania pliku.\n");
	}

	plik(deskryptor);

	printf("\nUdało się!\n");

	return 0;
}

void plik(int deskryptor)
{

	char linia[100];
	while( fgets(linia, 100, deskryptor) != NULL)
		{
			printf("%s", linia);
		}
	fclose(deskryptor);
	return;
}

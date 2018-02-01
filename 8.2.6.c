#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int plik(char *nazwa);

int main()
{
	char *nazwa = {"file_root"};
	int naj;

	naj = plik(nazwa);

	printf("Najczęściej występujący znak w pliku to: %c.\n", (char)naj);

	return 0;
}

int plik(char *nazwa)
{
	int ctr, i;
	char line[100];
	int ile[256] = {0};
	int naj = 0;
	int naj_indeks = 0;

	FILE *deskryptor;
	deskryptor = fopen(nazwa, "r");

	if (deskryptor==0)
	{
		printf("Błąd otwarcia pliku!\n");
		exit(1);
	}

	while(fgets(line, 100, deskryptor) != NULL)
	{
		for(ctr = 0; ctr<strlen(line); ctr++)
		{
			ile[(int)(line[ctr])]++;
		}
	}

	for(i = 0; i<256; i++)
	{
		if(ile[i]>naj)
		{
			naj_indeks = i;
			naj = ile[i];
		}
		printf("%d %d %d\n", i, naj_indeks, naj);
	}

	fclose(deskryptor);

	return(naj_indeks);

}


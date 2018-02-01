#include <stdio.h>
#include <stdlib.h>

struct dane_uzytkownika
{
	char imie[15];
	char nazwisko[40];
	int wiek;
};

FILE *deskryptor;

int main()
{
	struct dane_uzytkownika dane[3];
	int ctr;

	for(ctr = 0; ctr<3; ctr++)
	{
		printf("Podaj dane najbliższych:\n");
		puts("Imię:");
		gets(dane[ctr].imie);
		puts("Nazwisko:");
		gets(dane[ctr].nazwisko);
		puts("Wiek:");
		scanf(" %d", &dane[ctr].wiek);
		getchar();
	}

	deskryptor = fopen("/home/user/programowanie/zadania/dane.h", "w");

	if(deskryptor == 0)
	{
		printf("Błąd otwierania pliku\n");
		exit(1);
	}

	fprintf(deskryptor, "Dane Twoich najbliższych:\n");

	for(ctr = 0; ctr < 3; ctr ++)
	{
		fprintf(deskryptor, "\n %d. %s %s, %d lat.\n", (ctr+1), dane[ctr].imie,
		dane[ctr].nazwisko, dane[ctr].wiek);

	}

	fclose(deskryptor);
	return 0;
}

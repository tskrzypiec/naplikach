#include <stdio.h>


int des(char *sciezka);

int main()
{
	char *sciezka = {"dane.h"};
	int zwrot;

	zwrot = des(sciezka);

	printf("Deksryptor: %d\n", zwrot);
	return 0;
}

int des(char *sciezka)
{
	FILE *deskryptor;
	printf("%s\n", sciezka);
	deskryptor = fopen(sciezka, "r");

	printf("Deskryptor = %d\n", deskryptor);
	return deskryptor;
}

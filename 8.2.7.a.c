#include <stdio.h>

int plik( char * nazwa);

int main()
{

	char *nazwa = {"file_root"};
	int suma;

	suma = plik(nazwa);

	printf("Suma liczb w pliku: %d\n", suma);

	return 0;
}

int plik(char *nazwa)
{
	FILE *ws;
	ws = fopen(nazwa, "r");

	int i = 0;
	int tablica[1000] = {0};
	int suma = 0;


	for(i; i<1000; i++)
	{
		fscanf(ws, "%d", &tablica[i]);
	}


	fclose(ws);

	for(i=0;i<1000;i++)
	{
		suma = suma + tablica[i];
	}

	return (suma);

}

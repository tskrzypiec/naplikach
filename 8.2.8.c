#include <stdio.h>

int plik(char *nazwa);

int main()
{
	char *nazwa = {"file _root"};
	int najmniejsza;

	najmniejsza = plik(nazwa);

	printf("Najmniejsza liczba z pliku to %d\n", najmniejsza);

	return 0;
}

int plik(char *nazwa)
{
	FILE *ws;
	ws = fopen(nazwa, "r");
	int i = 0;
	int num;
	int najmniejsza = 100;

	for(i; i<100; i++)
	{
		fscanf(ws, "%d", &num);
		if(num<najmniejsza)
		{
			najmniejsza = num;
		}
	}

return(najmniejsza);

}

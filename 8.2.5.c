#include <stdio.h>
#include <string.h>

void plik(char *nazwa, int *ile_w, int *ile_z);

int main()
{
	char *nazwa = {"file_root"};
	int w = 0;
	int z = 0;

	plik(nazwa, &w, &z);

	printf("Ilość spacji: %d, ilość znaków zwykłych: %d.\n", w, z);
	return 0;
}

void plik(char *nazwa, int *ile_w, int *ile_z)
{
	printf("z = %d, w = %d\n", *ile_z, *ile_w);
//	*ile_z = 12;

	FILE *ws;
	ws = fopen(nazwa, "r");
	char linia[100];
	int ctr;
	int i1 = 0;
	int i2 = 0;

	while(fgets(linia, 100, ws) != NULL)

	{

		for(ctr = 0; ctr<strlen(linia); ctr++)
		{
			if(linia[ctr]==' ')
			{
				i1++;
			}
			else
			{
				i2++;
			}
		}
	}

	*ile_z = i2;
	*ile_w = i1;;

	return;
}

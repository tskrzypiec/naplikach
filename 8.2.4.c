#include <stdio.h>
#include <string.h>

int plik (char *nazwa);

int main()
{
	char *nazwa = {"ścieszka"};
	int ile;

	ile = plik(nazwa);

	printf("\n\nW pliku występuje %d wystąpień litery c\n", ile);

	return 0;

}

int plik (char *nazwa)
{
	FILE *deskryptor;
	deskryptor = fopen(nazwa, "r");

	char linia[40];
	int ile = 0;

	while(feof(deskryptor) == 0)
	{
		fgets(linia, 40, deskryptor);
		for(int ctr = 0; ctr<strlen(linia); ctr++)
		{
			if(linia[ctr] == 'C' || linia[ctr] == 'c')
			{
				ile++;
			//	printf("litera m? %c, miejsce %d\n", linia[ctr], ctr);
			}
		}
		if(feof(deskryptor) == 0)
		{
			printf("%s", linia);
		}
	}
//printf("m = %d\n", ile);
return ile;
}

#include <stdio.h>
#define N 2
#define M 2

void funkcja(char *nazwa, int **tab);

int main()
{

	char *nazwa = {"f_root"};
	int tab[N][M] = {{0, 1},{3,4}};

	funkcja(nazwa, *tab);

	return 0;
}

void funkcja(char *nazwa, int **tab)
{
	FILE *ws;
	ws = fopen(nazwa, "wb");

	if(ws==NULL)
	{printf("Nie udało się otworzyć\n");}

	fwrite(tab,sizeof(int),M,ws);

	fread(tab,sizeof(int),M,ws);
	int j;
	int i;

	for(i = 0; i<N; i++)
	{
		for(j=0;j<M;j++)
		{
			printf("%d\n", tab[i][j]);
		}
		printf("\n");
	}

	fclose(ws);

	return;
}

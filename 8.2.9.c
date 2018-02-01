#include <stdio.h>

int pliki(char *nazwa1, char *nazwa2);

int main()
{
	char *nazwa1 = {"file_root_1"};
	char *nazwa2 = {"file_root_2"};

	int odp;

	odp = pliki(nazwa1, nazwa2);

	if(odp == 1)
	{
		printf("Pliki są jednakowe.\n");
	}
	else
	{
		printf("Pliki się różnią.\n");
	}

	return 0;
}

int pliki(char *nazwa1, char *nazwa2)
{
	FILE *ws1, *ws2;
	ws1 = fopen(nazwa1, "r");
	ws2 = fopen(nazwa2, "r");

	char znak1;
	char znak2;

	fscanf(ws1, "%c", &znak1);
	fscanf(ws2, "%c", &znak2);


	while((feof(ws1)==0)&&(feof(ws2)==0))
	{
		if(znak1!=znak2)
		return 0;

		fscanf(ws1, "%c", &znak1);
		fscanf(ws2, "%c", &znak2);
	}

	if((feof(ws1)==1) && (feof(ws2)==1))
	{
		fclose(ws1);
		fclose(ws2);
		return 1;
	}
	else
	{
		fclose(ws1);
		fclose(ws2);
		return 0;
	}

}


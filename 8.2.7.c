#include <stdio.h>

int main()
{
	FILE *ws;
	ws = fopen("liczby.h", "w");
	int i = 0;
	for(i; i< 100; i++)
	{
		fprintf(ws, "%d ", (i*2));
	}
	fclose(ws);
	return 0;
}

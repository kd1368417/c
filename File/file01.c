#include<stdio.h>
main()
{
	FILE* fp;
	int a = 10, b = 20;
	fp = fopen("file01.txt", "w");
	fprintf(fp, "KOBEDENSHI\n");
	fprintf(fp,"%d+%d=%d\n", a, b, a + b);
	fclose(fp);
}
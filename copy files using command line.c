#include<stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	FILE *fs ,*ft;
	int ch;
	if(argc != 3)
	{
		printf("Inalid number of arrguments\n");
		return 1;
	}
	fs=fopen(argv[1],"r");
	if(fs == NULL)
	{
		printf("Can't fined the source file\n");
		return 1;
	}
	ft=fopen(argv[2],"w");
	if(ft == NULL)
	{
		printf("Can't open the target file");
		fclose(ft);
		return 1;
	}
	while(1)
	{
		ch=fgetc(fs);
		if (feof(fs)) break;
		fputc(ch,ft);
	}
	fclose(fs);
	fclose(ft);
	return 0;
}

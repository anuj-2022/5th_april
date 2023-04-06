#include<stdio.h>
#include<stdlib.h>

int main()
{
	short int i=1;
	char *c=(char*)&i;
	if(*c == i)
		printf("Little endian\n");
	else
		printf("Big endian\n");
	return 0;
}

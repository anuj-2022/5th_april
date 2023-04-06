#include<stdio.h>

int main()
{
	int x=21864;
	char *p=(char *)&x;
	printf("%x\n",*++p);
	printf("%d\n",*p);
	return 0;
}

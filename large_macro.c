#include<stdlib.h>
#include<stdio.h>
#define	MAX(a,b)	(a>b?a:b)


int main()
{
	int c,d;
	printf("Please enter the two macros:\n");
	scanf("%d%d",&c,&d);

	printf("number is %d and %d MAX is %d\n",c,d,MAX(c,d));
	return 0;
}

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a=6;
	int p1=0,p2=1;

	int bit1 = (a >>p1) & 1;
	int bit2 = (a >>p2) & 1;

	a ^= (-bit1 ^ a) & (1 << p2);
	a ^= (-bit2 ^ a) & (1 << p1);

	printf("original number %d\n",6);
	printf("after swap number is %d\n",a);

	return 0;
}

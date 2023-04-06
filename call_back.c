#include<stdio.h>
#include<stdlib.h>


void operation(int x, int y, int(*callback)(int,int))
{
	int r=callback(x,y);
	printf("Result is %d\n",r);
}

int add(int x,int y)
{
	return x+y;
}

int sub(int x, int y)
{
	return x-y;
}
int main()
{
	int a=10,b=20;
	
	operation(a,b,add);

	operation(a,b,sub);

	return 0;
}

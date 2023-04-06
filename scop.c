#include<stdio.h>
#include<stdlib.h>

void solve()
{
	int first =10,second =20;
	int third = first + second;
	{
		int third = second - first;
		printf("in %d\n",third);
	}
	printf("%d\n",third);
}
int main()
{
	solve();
	return 0;
}

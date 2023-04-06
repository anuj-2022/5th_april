#include<stdio.h>

int main()
{
	int n,i,j=0,k=0;
	printf("Enter the number :\n");
	scanf("%d",&n);
	for(i=0;i<32;i++)
	{
		if(((n>>i)&1)==1)
			j++;
		else
			k++;
	}
	printf("Set bit is %d\t and zero bit is %d :\n",j,k);
	return 0;
}

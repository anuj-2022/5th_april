#include<stdio.h>
#include<stdlib.h>

int main()
{
	int o=0,z=0,n,i,a[32];
	printf("Please Enter the data\n");
	scanf("%d",&n);
	for(i=0;i<32;i++)
	{
		if(((n>>i) &1)==1)
		{
			o++;
			a[i]=1;
		}
		else
		{
			z++;
			a[i]=0;
		}
	}
	printf("no of ones is %d and zeros is %d\n",o,z);

	for(i=0;i<32;i++)
	printf("Index are a[%d] and number is %d\n",i,a[i]);
	return 0;
}

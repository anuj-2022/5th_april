#include<stdio.h>
#include<stdlib.h>


int second_large(int b[],int n)
{
	int l,sl,i;
	l=b[0];
	sl=b[1];

	for(i=0;i<10;i++)
                if(b[i]>l)
		{
			sl=l;
			l=b[i];
		}
printf("2nd largest element is %d %d\n",sl,l);		
}

int main()
{
	int i,j,a[10],n;
	printf("Enter the data\n");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	second_large(a,10);

//	printf("2nd largest element is %d\n",n);
	return 0;
}

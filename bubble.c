#include<stdio.h>
#include<stdlib.h>

void print_fun(int *a);
void bubble(int *a);

int main()
{
	int data[10],i;
	printf("Plaese Enter The data:\n");
	for(i=0;i<10;i++)
	scanf("%d",&data[i]);
	printf("Normal data is :\n");
	print_fun(data);
	bubble(data);
	print_fun(data);
	return 0;
}

void print_fun(int *a)
{
	int i=0;
	for(i=0;i<10;i++)
		printf("%d\t",*a++);
	printf("\n");
}

void bubble(int *a)
{
	int i,j,t=0;
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]<a[j])
			{	
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}


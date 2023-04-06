#include<stdio.h>
#include<stdlib.h>
#define SIZE 10000
void print_fun(int *a);
void bubble(int *a);

int main()
{
	int data[SIZE],i;
	printf("Plaese Enter The data:\n");
	for(i=0;i<SIZE;i++)
	data[i]=i+1;
	printf("Normal data is :\n");
	print_fun(data);
	bubble(data);
	print_fun(data);
	return 0;
}

void print_fun(int *a)
{
	int i=0;
	for(i=0;i<SIZE;i++)
		printf("%d\t",*a++);
	printf("\n");
}

void bubble(int *a)
{
	int i,j,t=0;
	for(i=0;i<SIZE;i++)
	{
		for(j=i+1;j<SIZE;j++)
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


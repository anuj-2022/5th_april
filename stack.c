#include<stdio.h>
#include<stdlib.h>

#define N	10

int data[N];
int top=-1;

void push(int a);
void pop();
void display();

int main()
{
	int i,n;
	printf("Please enter the data :\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&n);
		push(n);
	}
	display();
	pop();
	display();
	return 0;
}

void push(int a)
{
	if(top>N+1)
	{
		printf("Stack over flow\n");
		exit(0);
	}
	top++;
	data[top]=a;
}

void pop()
{
	if(top>N+1)
        {
                printf("Stack over flow\n");
                exit(0);
        }
	printf("Removed data is %d\n",data[top--]);
}

void display()
{
	int i;
	for(i=0;i<=top;i++)
	printf("%d\t",data[i]);
}

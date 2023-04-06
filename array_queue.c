#include<stdio.h>
#include<stdlib.h>

#define N	10

int data[N];
int front=-1;
int rear=-1;

void en_queue(int x);
void de_queue();
void display();
void peak();


int main(void)
{
	int i,n;
	printf("Enter the data :\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&n);
		en_queue(n);
	}
	display();
	de_queue();
	display();
	peak();
	return 0;
}

void en_queue(int x)
{
	if(front == N-1)
	{
		printf("Over flow !\n");
		return 0;
	}
	else if(front == -1 && rear== -1)
	{
		front=rear=0;
		data[rear]=x;
	}
	else {
		rear++;
		data[rear]=x;
	}
	printf("data is Successfully added\n");
	return 0;
}

void de_queue(void)
{
	if(front == N-1)
        {
                printf("Over flow !\n");
                return 0;
        }
	else if(front == rear)
        {
                front=rear=-1;
	}
	else {
		printf("deleted data is %d\n",data[front]);
		front++;
	}
}

void display()
{
	int i;
	if(front == N-1)
        {
                printf("Over flow !\n");
                return 0;
        }
	else{
		printf("Data is :\n");
		for(i=front;i<=rear;i++)
			printf("%d\t",data[i]);
	}
}

void peak()
{
	if(front == N-1)
        {
                printf("Over flow !\n");
                return 0;
        }
	printf("Peak element %d and index is %d\n",data[front],front);
}

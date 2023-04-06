#include<stdio.h>
#include<stdlib.h>

int main()
{
	int rows,col,n,i,j;
	printf("Please enter the no of rows and columb\n");
	scanf("%d%d",&rows,&col);

	int **p=(int**)malloc(rows*sizeof(int*));

	for(i=0;i<col;i++)
	p[i]=(int *)malloc(col*sizeof(int));

	p[2][2]=99;

	for(i=0;i<rows;i++)
	{
		for(j=0;j<col;j++)
			printf("%d\t",p[j][i]);
	}

	for(i=0;i<rows;i++)
		free(p[i]);

	free(p);
	return 0;
}

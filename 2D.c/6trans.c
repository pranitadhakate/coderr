#include<stdio.h>

int main()
{
	int r;
	printf("enter of the row:");
	scanf("%d",&r);
	int c;
	printf("enter of the coloum:");
	scanf("%d",&c);
	int arr[r][c];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n");
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
		{
		printf("%d",arr[j][i]);
		}
		printf("\n");
	}
return 0;
}



//r=2
//c=3
//14
//25
//36

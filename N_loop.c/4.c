
#include<stdio.h>

int main()
{
	int N;
	printf("enter a number of N:");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{	
		for(int j=1;j<=5;j++)
		{
		printf("%d %d\n",i, j);
		}
		printf("\n");
	}
	
	return 0;
}

#include<stdio.h>

int main()
{
	int N;
	printf("enter of the number N:");
	scanf("%d",&N);
	int a=0,b=1,c;
	for(int i=1;i<=N;i++)
	{
		printf("%d",a);
		c=a+b;
		a=b;
		b=c;
	}
	printf("\n");
return 0;
}
		

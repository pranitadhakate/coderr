#include<stdio.h>
#include<limits.h>
int main()
{
	int arr[7]={1,2,11,-19,5,12};
	int max=INT_MIN;
	int smax=INT_MIN;
	for(int i=0;i<=6;i++)
	{
		if(max<arr[i])
		{
			smax=max;//smax is now previous max
			max=arr[i];//max is now a new max
		}
	else if(smax<arr[i] && max!=arr[i])//max>aar[i]
	{
		smax=arr[i];
	}	
	}
	printf("%d",smax);
	return 0;
}
	

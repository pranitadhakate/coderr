#include<stdio.h>

int main()
{
	int marks[10] = {95,90,31,25,100,50,15,89,97,30};
	for(int i=0;i<10;i++)
	{
		if(marks[i]<35)
		{
			printf("%d\n",i);//printf("%d\n",marks[i])use for mark
		}
	}
	return 0;
}

#include<stdio.h>

int main()
{
   int N,i,s=0;
   printf("enter the value of N:");
   scanf("%d",&N);
   for(int i=1;i<=N;i++)
   {
   	if(i%2==0)
   	{
   	    s=s+i;	
   	 }
   	  printf("%d\n",s);
   }
   
   return 0;
}
   

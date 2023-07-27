#include<stdio.h>
# include <string.h>

/*int main()
{
	int n;
	printf("enter of the number:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<3;j++)
		{
		if(j<arr[3])
		{
		printf("%d",arr[j]);
		}
		else
		{
		printf("-");
		}
		}
	}
	for(int i=0;i<12;i++)
	{
	if(i==3)
	{
	printf("%d",i);
	}
	else
	{
	printf("-");
	}
	printf("\n");
	}
	return 0;
}*/

int main() {
   char a[12];
   scanf("%s",a);
   int k=3;
   char d[12] = "";
   int s=0;
   for (int i=0; i<12; i++) {
       if (i==3 || i==7) {
           d[i]='-';
        }
        else {
          d[i]=a[s];
          s++;  
        }
   }
   printf("%s",d);
   return 0;
}
           
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
           
	
		

#include<stdio.h>

int main()
{
   int P,a,b,c,d,e;
   int Q,f,g,h,i,j;
   scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
   scanf("%d %d %d %d %d",&f,&g,&h,&i,&j);
   P=a+b+c+d+e;
   Q=f+g+h+i+j;
   if (P>Q)
   {
      printf("P is Topper");
   }
   else
   {
      printf("Q is Topper");
   }
   return 0;
}

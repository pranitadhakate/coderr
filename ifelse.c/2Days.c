#include<stdio.h>

int main()
{   
    int a;
    scanf("%d",&a);
    if (a==0)
    {
       printf("Monday");
    } 
    else if (a==1)
    {
       printf("Tuesday");
    }    
    else if (a==2)
    {  
       printf("Wednesday");
    }
    else if (a==3)
    {
       printf("Thursday");
    }
    else if (a==4)
    { 
       printf("Friday");
    }
    else if (a==5) 
    {
       printf("Saturday");
    }
    else
    {
       printf("Sunday");
    }
    return 0;
}

#include<stdio.h>
int main()
{
//this is the code to represent the maximum value//
int a, b, c, max;
printf("Enter the three values");
scanf("%d\n %d\n %d\n",&a,&b,&c);
if (a>b)
    {
     if(a>c)
     {
          max = a;
     }
     else{
          max = c;
     }
    }
    printf("Maximum value is %d", max);
    return 0;
    }
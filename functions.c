#include<stdio.h>
//function declared 
void sum ();
void main()
{    //Function Called
     printf("This is program of function");
     sum();
                                         //we can call the function as many times
}
//Defined the function here
void sum ()
{
      int n1, n2, s;
     printf("Enter two numbers");
     scanf("%d ", &n1,&n2);
     s = n1 + n2;
     printf("The sum of two numbers is %d ", s);
}
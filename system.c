#include<stdio.h>

int main(){

     int a=5,b=7,c=6; /*declare and initialize*/

     double avg = 0.0;/*good practice*/

     char ch = 'e';

     printf("on my system\n");
     printf("int is %d bytes.\n", sizeof(int));
     printf("long int is %d bytes.\n", sizeof(long int));
     printf("char is %c bytes.\n", sizeof(ch));
     printf("float is %f bytes.\n", sizeof(float));
     printf("double is %lf bytes.\n", sizeof(double));
     printf("long double is %Lf bytes.\n", sizeof(long double));
     
     return 0;

}
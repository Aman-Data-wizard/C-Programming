#include<stdio.h>

int main(){
int age;
printf("Enter age : ");
scanf("%d", &age);

if(age > 18); {
printf("Adult \n");
printf("They can vote\n");
printf("They can Drive\n");
}
else {
     printf("Not Adult");
}
return 0;
}
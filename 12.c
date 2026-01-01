#include<stdio.h>
int main(){
int a;
printf("enter the number:");
scanf("%d",&a);
if (a>0){
printf("the number is positive");
}
else if (a==0)
{
printf("the number is equal to zero");
}
else {
printf("the number is negative");
}
return 0;
}

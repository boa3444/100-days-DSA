# include<stdio.h>
int main(){
float r,t,p,simple,compound,amount;
printf("enter principle.rate and time :");
scanf("%f%f%f",&p,&r,&t);
simple=(p*r*t)/100;
printf("the simple interest is:%f\n",simple);
amount=p;
int i;
for (i=0;i<t;i++)
{
amount=amount+(amount*r/100);
}
compound=amount-p;
printf("the compound interest is:%f\n",compound);
return 0;
}

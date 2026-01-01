# include<stdio.h>
int main(){
int p,r,t,simple,compound;
printf("enter p,r,t:");
scanf("%d%d%d",&p,&t,&r);
simple=(p*r*t)/100;
printf("the simple interest is:%d\n",simple);
for(int i=1;i<t;i++){
simple=p*r*t;
compound=((simple+p)*r)/100;
printf("the compound interest is:%d\n",compound);
break;
}
return 0;
}

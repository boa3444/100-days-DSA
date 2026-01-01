# include<stdio.h>
int main(){
int n,sum=0;
printf("enter a integer:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{ 
sum+=i;
printf("sum of first natural numbers is :%d\n",sum);
}
return 0;
}

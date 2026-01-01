# include <stdio.h>
int main(){
    int a,sum=0;
    printf("Enter the number of natural numbers you want to add: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        sum=sum+i;
    }
    printf("The sum of first %d natural numbers is: %d\n",a,sum);
    return 0;
}

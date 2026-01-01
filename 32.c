# include <stdio.h>
int main(){
    int num,ognum,remainder;
    int reversed = 0;
    printf("Enter a number: ");
    scanf("%d",&num);
    ognum=num;
    while(num!=0)
    {
        remainder=num%10;
        reversed=reversed*10+remainder;
        num/=10;
    }
    if(ognum=reversed)
    {
        printf("%d is palindrome no.",ognum);
    }else{
        printf("%d is not a palindrome no.",ognum);
    }
return 0;
}

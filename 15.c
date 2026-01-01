#include<stdio.h>
int main(){
char ch;
printf("enter a charachter:");
scanf("%c",&ch);
if((ch>='A')&&(ch<='Z')){
printf("%c it is an uppercase alphabet.\n",ch);
}else if ((ch>='a')&&(ch<='z')){
printf("%c it is a lowercase alphabet.\n",ch);
}else if((ch>='0')&&(ch<='9')){
printf("%c it is a special character.\n,",ch);
}
else {
printf("not a uppercase,lowercase,and aspecial charachter.");
}
return 0;
}

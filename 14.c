#include<stdio.h>
int main(){
char ch;
printf("enter any alphabet:");
scanf("%c",&ch);
if ((ch>='A' &&ch<='Z')||(ch>='a' && ch<='z')){
if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
printf("%c it is a vowel:\n",ch);
}else{
printf("%d it is not a  vowel:\n",ch);
}
}else{
printf("invalid input!, please enter an alphabet>\n");
}
return 0;
}

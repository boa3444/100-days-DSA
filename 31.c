#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
   if (n == 0) { 
     printf("0");
     return 0;
   }
  
  int binary = 0, place = 1;
  while (n > 0) {
    int digit = n % 2;
    binary = binary + digit * place;
    place = place * 10;
    n = n / 2;
 }

printf("%d", binary);

return 0;
}

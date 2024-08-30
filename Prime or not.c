#include <stdio.h>

int main(){
int i, num;
printf("Enter the number here to check whether it is prime or not : ");
scanf("%d", &num);
    if (num < 4){
    printf("It is prime");
      return 0;
  }
for(i=2;i<=(num/2);i++){
if(num%i == 0){
printf("%d is not a prime because it is divisible by %d", num, i);
break;
}
if(i==num/2){
printf("It is a prime number");
}
  
}
return 0;
}

#include <stdio.h>

void main(){
int num,rev = 0,len,i,temp;
printf("Input a number to check whether it is palindrome or not : ");
scanf("%d", &num);
temp = num;

while(num!=0){
    rev = num%10 + rev*10;
	num /= 10;
}

if(temp == rev){
    printf("%d is a palendrome",temp);
}else{
    printf("%d is not a palindrome",temp);
}
}

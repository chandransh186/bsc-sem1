#include <stdio.h>

void main(){
    
    int num,count= 0;

    printf("Enter your number to find sum of all it's digits :");
    scanf("%d", &num);

    while(num!=0){
        count += num%10;
        num /= 10;
    }

    printf("Sum of digits : %d", count);
}

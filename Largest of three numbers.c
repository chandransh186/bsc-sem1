#include<stdio.h>

void main(){
int a[3],i,x;
printf("Enter three numbers ");
scanf("%d%d%d",&a[0],&a[1],&a[2]);
x = a[0];
  for(i = 0; i < 3; i++){
    if(a[i]>x){
      x = a[i];
    }
  }
printf("\nThe largest number is %d", x);
}

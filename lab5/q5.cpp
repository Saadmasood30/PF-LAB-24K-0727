#include<stdio.h>
int main(){
int num;
printf("Enter the required number:");
scanf("%d", &num);
if (num & 1) 
printf("The number %d is odd", num);
else
printf("The number %d is even", num);
}

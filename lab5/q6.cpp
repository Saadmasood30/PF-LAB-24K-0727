#include<stdio.h> 
int main(){
int n,num=0;
printf("Enter the binary number: ");
scanf("%d", &n);
if(n<0 && n>15)
printf("Enter a valid number");
else if(n&1)
num=+1;
else if (n&2)
num=+1;
else if (n&4)
num=+1;
else if (n&8)
num=+1;
printf("\n the number of 1s in binary number are %d", num);
}

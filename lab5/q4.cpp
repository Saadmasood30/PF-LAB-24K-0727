#include<stdio.h>
int main(){
int num, membership;
printf("Enter the purchase amount:");
scanf("%d", &num);
printf("Do you have a membership? (Enter 1 for yes and 0 for no)");
scanf("%d",&membership);
num>100 && membership ==1?printf("You are eligble for discount"): printf("You are not eligible for discount");
num<0 ? printf("Invalid amount"): printf("");
}

#include<stdio.h>
int main(){
	int num1,num2;
	printf("Enter number1 : ");
	scanf("%d",&num1);
	printf("\n Enter number2 :");
	scanf("%d",&num2);
	if(num1 > num2){
		if(num1>100){
			printf("Number is significantly larger");
		}else printf("Nuber is larger");
	}
	else if(num1 < num2){
		if(num1<0){
			printf("First number is negative and smaller");
		}else printf("First number is smaller");
	}
	
}
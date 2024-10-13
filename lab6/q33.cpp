#include<stdio.h>
int main(){
	int num;
	printf("Enter your number:\n");
	scanf("%d", &num);
	while(num<1){
		printf("NO\n");
		printf("enter new number\n");
		scanf("%d", &num);
	}
	printf("this is a positive number");
}

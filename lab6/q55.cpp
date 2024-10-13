#include<stdio.h>

int main(){
	int num, prime=1;
	printf("Enter your number;\n");
	scanf("%d",&num);
		if(num<=1){
		printf("%d is not a prime number", num);}
		for(int i=2; i<num; i++){
		if(num%i==0){
		printf("%d is not a prime number", num);
		prime=0;
		break;}
		else if(prime==1)
		printf("%d is a prime number", num);
		else
		printf("%d is not a prime number", num);
		break;}
		
}

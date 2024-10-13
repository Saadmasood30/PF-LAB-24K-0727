#include<stdio.h>

int main(){
	int num, var=8, sum=0;
	printf("Enter your number:\n");
	scanf("%d",&num);
	while (num>0){
	sum+=num+var;
	printf("%d\n",sum);	
	printf("Enter new number\n");
	scanf("%d",&num);	
	}
	printf("this is a 0");
}

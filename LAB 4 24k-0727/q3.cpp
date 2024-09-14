#include<stdio.h>

int main(){
	int original_amount;
	float amount_saved;
	float final_amount=original_amount-amount_saved;
	printf("Enter original amount");
	scanf("%d",&original_amount);
	if(original_amount<1500){
		amount_saved=0.07*original_amount;
		final_amount=original_amount-amount_saved;
		printf("%f",final_amount);
	}
	else if(1500<original_amount<3000){
		amount_saved=0.12*original_amount;
		final_amount=original_amount-amount_saved;
		printf("%f",final_amount);
	}
	else if(3000<original_amount<5000){
		amount_saved=0.22*original_amount;
		final_amount=original_amount-amount_saved;
		printf("%f",final_amount);
	}
	else if(original_amount>5000){
		amount_saved=0.30*original_amount;
		final_amount=original_amount-amount_saved;
		printf("%f",final_amount);
	}
	
}

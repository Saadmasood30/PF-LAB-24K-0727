#include<stdio.h>

int main(){
	int units;
	float unit_price;
	float bill;
	printf("Enter the number of units consumed\n");
	scanf("%d",&units);
	if(units<=30){
	bill=0.60*units+0.15*(units*unit_price);
	printf("Rs %f",bill);	
	} 
	else if(units<=110){
	bill=30*0.60+((units-30)*0.85)+0.15*(30*0.60+((units-30)*0.85));
	printf("Rs %f",bill);	
	}
	else if(units<=210){
		bill=30*0.60+(80*0.85)+((units-110)*1.30)+0.15*(30*0.60+(80*0.85)+((units-110)*1.30));
		printf("Rs %f",bill);
	} 
	else if(units>210){
		bill=30*0.60+(80*0.85)+(100*1.30)+((units-210)*1.60)+0.15*(30*0.60+(80*0.85)+(100*1.30)+((units-210)*1.60));
		printf("Rs %f",bill);
	}
}

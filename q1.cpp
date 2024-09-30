#include<stdio.h>
int main(){
int age;
int citizenship_status;
printf("ENTER YOUR AGE: ");
scanf("%d",&age);
printf("ARE YOU A DUAL NATIONAL (1=YES, 0=NO):");
scanf("%d", &citizenship_status);
if (age>=18&& citizenship_status==0){
printf("YOU CAN VOTE");
}
else{
printf("YOU CANNOT VOTE");
}
}

#include<stdio.h>
int main(){
int marks;
printf("enter marks: ");
scanf("%d", &marks);
if (marks>=90){
printf("grade=A");}
else if(80<-marks<=89){
printf("grade=B");
}
else if (70<=marks<=79){
printf("grade=C");
}
else if(60<-marks<=69){
printf("grade=D");
}
else{
printf("grade=F");
}
}

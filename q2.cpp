#include<stdio.h>
int main(){
int angle1, angle2, angle3;
int sum_of_angles;
sum_of_angles= angle1 + angle2 + angle3;
printf("enter angle 1:");
scanf("%d",&angle1);
printf("enter angle 2:");
scanf("%d",&angle2);
printf("enter angle 3:");
scanf("%d",&angle3);
if (angle1>0 && angle2>0 && angle3>0 && sum_of_angles==180)
printf("valid triangle");
else
printf("invalid triangle");
}

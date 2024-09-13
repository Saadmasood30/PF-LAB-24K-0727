#include<stdio.h>

int main(){
	int students_score;
	printf("Enter student's score");
	scanf("%d",&students_score);
	if(students_score>89&&students_score<101){
		printf("Grade=A");}
		else if(students_score<90&&students_score>79){
			printf("Grade=B");}
			else if(students_score<80&&students_score>69){
				printf("Grade=C");}
				else if(students_score<70&&students_score>59){
					printf("Grade=D");}
					else if(students_score<60){
						printf("Grade=F");}
						else
						{printf("invalid score");
						}
					
				
			
			
		}
	
	

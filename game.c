//author: Junhao Chen
//date: 9/27
#include<stdio.h>
#include<stdlib.h>
int main(){
	int input1,input2,try,difference;
	try=0;
	printf("enter a number between 1 and 100\n");	
	scanf("%d",&input1);
	printf("-\n");
	printf("-\n");
	printf("-\n");
	printf("-\n");
	printf("-\n");
	printf("-\n");
	printf("-\n");
	printf("-\n");
	printf("-\n");
	printf("-\n");
	printf("-\n");
	printf("-\n");
	printf("-\n");
	printf("-\n");
	printf("-\n");
	printf("-\n");
	printf("-\n");
	printf("-\n");
	printf("-\n");
	printf("-\n");
	printf("-\n");
	printf("-\n");
	printf("-\n");
	printf("-\n");
	do{
	printf("enter your guess\n");
	scanf("%d",&input2);
	try++;
	difference=abs(input2-input1);
	if(difference>10){
		if (input2>input1){
		printf("too high\n");
		}
		else{
		printf("too low\n");}
		}
	if(try>4){
	printf("you have tried over 5 times.\n");
	}
	}while(input1!=input2);
	if(try>4){
	printf("you have tried over 5 times.\n");
	}
	else{
	printf("you guessed it\n");}
	return 0;
}

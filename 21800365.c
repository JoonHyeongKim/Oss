#include <stdio.h>
#include <stdlib.h>
#include "21800365.h"
#define MAX_SIZE 2048

int sort_digits(int n){
	int number[MAX_SIZE];
	int result1=0;
	int count;
	int temp;
	for(int i=0;i<MAX_SIZE;i++){
		number[i]=n%10;
		if(n==0 && n/10==0)
			break;
	n/=10;
	count =i;
	}
	
	for(int i=0;i<count;i++){
		for(int j=0;j<count-i;j++){
			if(number[j]>number[j+1]){
				temp=number[j];
				number[j]=number[j+1];
				number[j+1]=temp;
				}
			}
		
	}
		for(int i=0;i<count+1;i++){
		result1*=10;
		result1+=number[i];
	}
	return result1;
	}
char* binarize(int n){
	char bin[MAX_SIZE];
	char temp;
	char* result;
	int count=0;
	int remainder=n;
	while(n!=0){
	remainder=n%2;
	n/=2;
	bin[count]=remainder+'0';
	count++;
	}
	bin[count]='\0';
	for(int i=count-1;i>=count/2;i--){
		temp=bin[i];
		bin[i]=bin[count-1-i];
		bin[count-1-i]=temp;
	}
	result=bin;
	printf("binary>");
	for(int i=0;i<count;i++){
		printf("%c",bin[i]);
	} 
	printf("\n");
	return result;
}
	



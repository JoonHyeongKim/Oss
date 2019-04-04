#include <stdio.h>
#include <stdlib.h>
#include "21600151.h"
#include <stdbool.h>
#define MAX_SIZE 2048

_Bool isPrime(int n){
	if(n<=1)
		return false;
	for(int i=2;i<n;i++)
		if(n%i==0)
			return false;
	
	return true;
	
}
int reverse_digits(int n){
	int number[MAX_SIZE];
	int result=0;
	int count;
	
	for(int i=0;i<MAX_SIZE;i++){
		number[i]=n%10;
		if(n==0&&n/10==0)
			break;
	n/=10;
	count=i;
	}
	for(int i=0;i<count+1;i++){
		result *=10;
		result+=number[i];
	}
	return result;
}

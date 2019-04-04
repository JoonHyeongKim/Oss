#include <stdio.h>

int main(){
	int i,num,sol=1;
	printf("Enter a number: ");
	scanf("%d", &num);

	for(i=1;i<num;i++)
		sol*=i;

		printf("%d! = %d\n", num,sol);
		return 0;
	}


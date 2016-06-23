#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(void){

	char *input;
	printf("Enter number:");
	scanf("%s", input);	
	int *num;
	*num  = (*input - '0');
	printf("%d\n", (*num)/4);


}

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


void change(int* x){++(*x); }

int main(void){

int x=1, y='a', z;
printf("Old: %d\n", y); 
change(&y);
printf("New: %d\n", y);




}



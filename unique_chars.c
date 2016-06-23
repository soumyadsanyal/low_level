#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>

/*
This function is to determine if a string has all unique characters.

Strategy is to build a hashtable by reading the string by character:

1. For each character c in string, read character
2. If c in h, increment h[c], else set h[c]=1
3. If h[c]>1 return false immediately
4. If string exhausted, return true

 *
 * */
struct entry_s{
	char* key;
	char* value;
	struct entry* next;

};

typdef struct entry_s entry_t;

struct hashtable_s{
	int size;
	struct entry_s ** hashtables;
};




int check_duplicates(char* a){

	char* initial = a;
	int l=0;
	while (*a != '\0'){a++; l++;}
	a=initial;
	char* b[l];
	while (*a != '\0') {   }


}



int main(void){

	char* a;
	scanf("Enter a string: ", a);
	int result = check_duplicates(a);
	if (result==1){printf("The string has all unique characters.\n");}
	else {printf("The string has some repeated characters.\n");}

	return 0;
	


}




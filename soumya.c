#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int length(char *s){
	char *p = s;
	printf("%s", p);
	while(*(p) != '\0'){
		p++;
}
	printf("\n");
	return (int) (p - s);
}

char *readline(char *content, int line_size){
	char *return_value = content;
	char c;
	int position=0;
	while ((c=getchar()) != '\n'){
		*(return_value++) = c;
		position++;
		if (position>=line_size){
			line_size=line_size*2;
			char *try = realloc(content, line_size);
 			if (try ==NULL){
				return NULL;
}
			else{content=try;}
			return_value = content+position;
}
}
	*return_value='\0';
	return content;
}

int main(){
	int line_size = 10;
	char *input = malloc(line_size); 
	printf("Enter a string, and I'll compute the length: \n");
	input = readline(input, line_size);
	printf("\nthe returned value from the readline function is %s.\nThe locations of the start and end of the string are %d and placeholder\n", input, (int) input);
	printf("The length is %d and the string is %s\n", length(input), input);
	}



#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int length(char *s){
	int count = 0;
	char *p = s;
	printf("%s", p);
	while(*(p) != '\0'){
		count++;
		p++;
}
	printf("\n");
	return count;
}

int readline(char *content, int line_size){
	char *return_value = content;
	char c;
	int position=0;
	while ((c=getchar()) != '\n'){
		*(return_value++) = c;
		position++;
		if (position>=line_size){
			line_size+=line_size;
// this part (dynamic resizing) isn't working yet, NEED TO fix
			return_value=realloc(return_value, line_size);
			if (return_value==NULL){
				return -1;
}
			return_value = return_value+position;
}
}
	*return_value='\0';
	//return_value++;
	//content=return_value;
	return 0;
}

int main(){
	int line_size = 128;
	char *input = malloc(line_size); 
	printf("Enter a string, and I'll compute the length: \n");
	readline(input, line_size);
	printf("The length is %d and the string is %s\n", length(input), input);
	}



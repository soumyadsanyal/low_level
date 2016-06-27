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
//		printf("position is %d and line_size is %d\n", position, line_size);
		if (position>=line_size){
			line_size=line_size*2;
// this part (dynamic resizing) isn't working yet, NEED TO fix
 //			printf("old address is %d", (int) content);
			char *try = realloc(content, line_size);
 			if (try ==NULL){
				return NULL;
}
			else{content=try;}
			printf("new address is %d", (int) content);
			printf("\n\nline size is %d\n\n", line_size);
			return_value = content+position;
//			printf("\n\ncontent is located at %d, return_value is located at %d\n\n", (int) content, (int) return_value); 
}
}
	*return_value='\0';
//	printf("\nfinal starting and ending addresses are %d and %d, with an offset of %d\n", (int) content, (int) return_value, (int) (return_value - content));
	char *p = content;
	while (p<=return_value){	
//	printf("(character is %c, located at %d, start of sentence is %d, end of sentence is %d\n) ", *p, (int) p, (int) content, (int) return_value);
	p++;
}
	//return_value++;
	//content=return_value;
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



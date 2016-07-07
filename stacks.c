#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>
#include "./mynode.h"



int main(void){
	
	int another = 1;

	node *current = make_node();
	node *head = current;
	printf("Make another node? ");
	scanf("%d", &another);
	while(another==1){
		node *next = make_node();
		connect_nodes(current, next);
		current = next;
		printf("Make another node? ");
		scanf("%d", &another);
	

}
	enumerate_list(head);
}

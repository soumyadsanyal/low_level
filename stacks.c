#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>
#include "./mynode.h"



int enumerate_list(node *head){
	node *p = head;
	printf("Node contains %d, located at %p, points to %p\n", (*p).data, p, (*p).next);
	while(((*p).next)!=NULL) {
	p=(*p).next;
	printf("Node contains %d, located at %p, points to %p\n", (*p).data, p, (*p).next);
}
	return 0;
}

node *make_node(void){
	node *n = malloc(sizeof(node));
	printf("Enter data for node: ");
	scanf("%d", &((*n).data));
	(*n).next=NULL;
	return n;
}

int connect_nodes(node *first, node *second){
	(*first).next = second;
	return 0;
}

int main(void){
	
	int another = 1;

	node *current = make_node();
	node *head = current;
	while(another==1){
		printf("Make another node? ");
		scanf("%d", &another);
		if(!another) {break;}
		node *next = make_node();
		connect_nodes(current, next);
		current = next;


}
	enumerate_list(head);
}

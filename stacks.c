#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>
#include "./mynode.h"



int main(void){

	node *head = make_linked_list();	
	enumerate_list(head);
	node *extra = make_node();
	head = insert_node(head, extra, 2);
	enumerate_list(head);
}

struct node {
	int data;
	struct node *next;
};

typedef struct node node;


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


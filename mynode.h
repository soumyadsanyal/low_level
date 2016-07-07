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

node *make_linked_list(void){
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
	return head;
}

node *insert_node(node *head, node *newnode, int position){
	node *current = head;
	while (position-1>0 && (*current).next!=NULL){
		position--;
		current=(*current).next;
}
	if ((*current).next == NULL){
		return NULL;
}
	else{
		node *over = (*current).next;
		(*current).next = newnode;
		(*newnode).next = over;
}
	return head;
}

node *remove_node(node *head, int position){
	node *current = head;
	while (position-1>0 && (*current).next!=NULL){
		position--;
		current=(*current).next;
}
	if ((*current).next==NULL){
		return NULL;
}
	else{
		if(( (*( (*current).next)).next)==NULL){
			((*current).next=NULL);
}
	else{
		node *over = ( (*( (*current).next)).next);
		(*current).next = over;
}
	return head;
}

}


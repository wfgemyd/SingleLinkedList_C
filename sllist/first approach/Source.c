#include "llist.c"

int main() {

	Node* list1_head = NULL;

	list1_head = insert_at_head(list1_head, 7);
	list1_head = insert_at_head(list1_head, 3);

	list1_head = insert_at_tail(list1_head, 14);
	list1_head = insert_at_tail(list1_head, 44);
	print_list(list1_head);

	bool deleted =false;
	
	list1_head = insert_at_middle(list1_head, 66, 2);
	list1_head = delete_at_head(list1_head);
	
	print_list(list1_head);
	printf("The length of the list is: %d \n",length(list1_head));

	replace_matches(list1_head, 7, 33);

	if (is_member(list1_head, 7)) printf("it is in the list");
	else printf("not here");

	printf("\n \n________ \n \n");
	list1_head = delete_first_match(list1_head, 44, &deleted);
	
	print_list(list1_head);

	//______________________________________

	Node* list2_head = NULL;
	int num_deleted = 0;
	list2_head = insert_at_head(list2_head, 7);
	list2_head = insert_at_head(list2_head, 4);
	list2_head = insert_at_head(list2_head, 2);
	list2_head = insert_at_head(list2_head, 7);
	list2_head = insert_at_head(list2_head, 7);
	list2_head = insert_at_head(list2_head, 6);
	list2_head = insert_at_head(list2_head, 7);
	print_list(list2_head);

	list2_head = efficent_delete_match(list2_head, 7, &num_deleted);

	print_list(list2_head);

	//____________________________ preformance test
	Node* list_test = NULL, *list_test2 = NULL;
	for (int i = 0; i < 50000; i++)
		list_test = insert_at_head(list_test, i % 10);
	for (int i = 0; i < 50000; i++)
		list_test2 = insert_at_head(list_test2, i % 10);
	clock_t tic, toc;
	tic = clock();
	list_test = delete_all_matches(list_test, 4, &num_deleted);
	toc = clock();
	printf("delete_all_matches:%fs\n",
		(double)(toc - tic) / CLOCKS_PER_SEC);
	printf("elements deleted: %d\n", num_deleted);

	tic = clock();
	list_test2 = efficent_delete_match(list_test2, 4, &num_deleted);
	toc = clock();
	printf("efficent_delete_match:%fs\n",
		(double)(toc - tic) / CLOCKS_PER_SEC);
	printf("elements deleted: %d\n", num_deleted);

	//__________________________
	printf("\n\n\n\n");
	print_list(list1_head); print_list(list2_head);
	list1_head = append_list(list1_head, list2_head);
	list1_head=reverse_list(list1_head);
	sort_list(list1_head);
	print_list(list1_head);

	/*
	Node a, b, c;
	a.value = 5;
	b.value = 6;
	c.value = 7;

	a.next = &b;//will give me the memory location of b
	b.next = &c;
	c.next = NULL; //tail

	print_list(&a);
	*/
	freeList(list1_head);


	return 0;
}
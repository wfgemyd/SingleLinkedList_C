# SingleLinkedList_C
Single Linked List Library Documentation

The Single Linked List Library is a C library for managing a singly linked list, a data structure consisting of a sequence of elements linked by pointers. The library contains functions to perform operations such as insertion, deletion, traversal, and searching of the elements in the list. The library is implemented as a collection of C functions that can be included in any C program that requires the use of a singly linked list.

Data Structure
The singly linked list data structure consists of a sequence of elements, where each element is a node containing a value and a pointer to the next element in the list. The first node of the list is called the head, and the last node points to NULL.

API Reference
This library provides the following functions:

print_list(Node* head) - Prints the elements of the list starting from the head.

bool is_empty(Node* head) - Checks whether the list is empty or not.

Node* insert_at_head(Node* head, int new_value) - Inserts a new node with the specified value at the head of the list.

Node* insert_at_tail(Node* head, int new_value) - Inserts a new node with the specified value at the end of the list.

Node* insert_at_middle(Node* head, int new_value, int location) - Inserts a new node with the specified value at the specified position in the list.

Node* delete_at_head(Node* head) - Deletes the node at the head of the list.

Node* delete_at_tail(Node* head) - Deletes the node at the end of the list.

Node* delete_first_match(Node* head, int delete_value, bool* was_deleted) - Deletes the first node with the specified value in the list.

Node* delete_all_matches(Node* head, int delete_value, int* num_deleted) - Deletes all the nodes with the specified value in the list.

Node* efficient_delete_match(Node* head, int delete_value, int* num_deleted) - Deletes all the nodes with the specified value in the list in an efficient way.

int length(Node* head) - Returns the length of the list.

bool is_member(Node* head, int find_val) - Checks if the list contains the specified value.

int count_matches(Node* head, int find_val) - Returns the number of nodes in the list with the specified value.

void replace_matches(Node* head, int find_value, int replace_value) - Replaces all occurrences of the specified value with the new value in the list.

Function Details
print_list(Node* head): This function takes the head of the list as a parameter and prints the elements of the list starting from the head. It traverses the list until it reaches the end (NULL) and prints the value of each node along with its index in the list.

bool is_empty(Node* head): This function takes the head of the list as a parameter and checks whether the list is empty or not. It returns true if the head is NULL, indicating an empty list, and false otherwise.

Node* insert_at_head(Node* head, int new_value): This function takes the head of the list and a new value as parameters and inserts a new node with the specified value at the head of the list. It first allocates memory for the new node, sets its value to the new value, and sets its next pointer to the current head. If the list is empty (head is NULL), it returns the new node as the new head, otherwise, it returns the

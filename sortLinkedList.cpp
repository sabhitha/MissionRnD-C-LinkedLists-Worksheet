/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	struct node* ptr = head;
	head = head->next;
	while (head != NULL){
		ptr = head;
		while (ptr != head){
			if (ptr->num > head->num){
				int temp = head->num;
				head->num = ptr->num;
				ptr->num = temp;
			}
			else
				ptr = ptr->next;
		}
		head = head->next;
	}
	return NULL;
}
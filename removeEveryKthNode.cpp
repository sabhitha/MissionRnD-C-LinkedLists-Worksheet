/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};
typedef struct node NODE;
NODE *ptr;
struct node * removeEveryKthNode(struct node *head, int K) {
	ptr = head;
	int count = 0;
	while (ptr){
		count++;
		ptr = ptr->next;
	}
	if (K == 0 || K > count)
		return NULL;
	if (!head)
		return NULL;
	if (K == 1)
		head = head->next;
	for (int i = 0; i < K - 2; i++){
		head = head->next;
	}
	head->next = head->next->next;
	return head;
}
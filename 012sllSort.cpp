/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};
typedef struct node NODE;

void sll_012_sort(struct node *head){
	NODE *ptr;
	ptr = head;
	int count = 0;
	int count0 = 0;
	int count1 = 0;
	int count2 = 0;
	while (ptr){
		if (ptr->data == 0)
			count0++;
		else if (ptr->data == 1)
			count1++;
		else if (ptr->data == 2)
			count2++;
		count++;
		ptr = ptr->next;
	}
	ptr = head;
	for (int i = 0; i < count0; i++){
		ptr->data = 0;
		ptr = ptr->next;
	}
	for (int i = 0; i < count1; i++){
		ptr->data = 1;
		ptr = ptr->next;
	}
	for (int i = 0; i < count2; i++){
		ptr->data = 2;
		ptr = ptr->next;
	}
}
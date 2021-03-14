#include "linkedlist.h"

void printlist(NODE ptr) {
	while (ptr != NULL) {
		printf("Element: %d\n", ptr->data);
		ptr = ptr->next;
	}
}

NODE insert_at_beginning(NODE head, int data) {
	NODE ptr = MALLOC_NODE;
	ptr->data = data;
	ptr->next = head;
	return ptr;
}

NODE insert_at_end(NODE ptr, int data) {
	NODE n_node = MALLOC_NODE;
	NODE p = ptr;

	while (p->next != NULL) {
		p = p->next;
	}
	p->next = n_node;
	n_node->next = NULL;
	n_node->data = data;

	return ptr;
}

NODE insert_at_idx(NODE head, int idx, int data) {
	NODE n_node = MALLOC_NODE;
	NODE h = head;
	int i = 0;

	while (i < idx - 1) {
		h = h->next;
		i++;
	}

	n_node->data = data;
	n_node->next = h->next;
	h->next = n_node;

	return head;
}

NODE delete_at_beginning(NODE head) {
	NODE p = head;
	head = head->next;
	free(p);
	return head;
}

NODE delete_at_end(NODE head) {
	NODE p = head;
	NODE q = head->next;
	while (q->next != NULL) {
		p = p->next;
		q = q->next;
	}
	p->next = q->next;
	free(q);
	return head;
}

NODE delete_at_idx(NODE head, int idx) {
	NODE previous_node = head;
	NODE next_node = head->next;
	int i = 0;

	while (i < idx - 1) {
		previous_node = previous_node->next;
		next_node = next_node->next;
		i++;
	}
	previous_node->next = next_node->next;
	free(next_node);
	return head;
}
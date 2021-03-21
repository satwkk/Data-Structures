#pragma once

#include <stdio.h>
#include <stdlib.h>

#define NODE struct Node*
#define MALLOC_NODE (NODE)malloc(sizeof(struct Node))


struct Node {
	int data;
	NODE next;
};

void printlist(NODE ptr);


NODE create_new_node(int data);
NODE insert_at_beginning(NODE head, int data);
NODE insert_at_end(NODE ptr, int data);
NODE insert_at_idx(NODE ptr, int idx, int data);
NODE delete_at_beginning(NODE head);
NODE delete_at_end(NODE head);
NODE delete_at_idx(NODE head, int idx);

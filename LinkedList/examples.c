#include <stdio.h>
#include <stdlib.h>

#include "linkedlist.h"

int main(int argc, char const* argv[])
{
    NODE head = MALLOC_NODE;
    NODE second = MALLOC_NODE;
    NODE third = MALLOC_NODE;
    NODE fourth = MALLOC_NODE;
    NODE new_head = MALLOC_NODE;

    head->data = 0;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 20;
    third->next = fourth;

    fourth->data = 30;
    fourth->next = NULL;

    printf("-----------\n");
    printlist(head);

    printf("List after inserting at beginning\n");
    printf("---------------------------------\n");
    new_head = insert_at_beginning(head, 50);
    printlist(new_head);

    printf("List after inserting at end\n");
    printf("---------------------------------\n");
    insert_at_end(head, 69);
    printlist(head);

    printf("List after inserting at index 2\n");
    printf("---------------------------------\n");
    insert_at_idx(head, 2, 99);
    printlist(head);

    printf("Deleting the first node.\n");
    printf("------------------------\n");
    NODE n_node = delete_at_beginning(head);
    printlist(n_node);

    printf("Deleting node at the end.\n");
    NODE n_node2 = delete_at_end(head);
    printlist(head);

    delete_at_idx(head, 2);
    printlist(head);

    return 0;
}
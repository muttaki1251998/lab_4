#include "header.h"

void print_node(Node *node)
{
    while (node != NULL)
    {   
        printf("%d\n", node->value);
        printf("%.2f\n", node->key1);
        printf("%.2f\n", node->key2);
        printf("\n");
        node = node->next;        
    }
} 
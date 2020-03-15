#include "header.h"

Node *find_node(Node *head, double value)
{
    Node *new_node = (Node *)malloc(sizeof(Node));
    Node *node = head;
    
    while (node != NULL)
    {
        if(node->key1 == value)
        {
            new_node = node;
        }
        node = node->next;
    }

    return new_node;
    
}
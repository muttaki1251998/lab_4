#include "header.h"

Node *insert_node(Node *prev, int *i_value, double *key1, double *key2, int num_nodes, int loop)
{
    Node *new_node = (Node *)malloc(sizeof(Node));
    int i = 0;        

        if(prev != NULL)
        {
            new_node->value = i_value[loop];
            new_node->key1 = key1[loop];
            new_node->key2 = key2[loop]; 
            new_node->next = prev->next;  
            prev->next = new_node;
        }

    return new_node;
}
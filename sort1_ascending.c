#include "header.h"

void sort1_ascending(Node *node, int num_nodes)
{

    Node *sort1_head = node;    
    
    while (sort1_head != NULL)
    {   
        printf("%d\n", sort1_head->value);
        printf("%.2f\n", sort1_head->key1);
        printf("%.2f\n", sort1_head->key2);

        sort1_head = sort1_head->sort1;        
    } 

}
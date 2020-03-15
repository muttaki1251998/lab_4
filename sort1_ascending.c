#include "header.h"

Node *sort1_ascending(Node *current)
{
    double min;
    Node *sort1_head = NULL, *ascended_node = NULL;
    ascended_node = (Node *)malloc(sizeof(Node));

    min = current->key1;

    if(current == NULL)
    {
        
    }

    while (current != NULL)
    {
        if(min > current->key1)   
        {
            min = current->key1;       
        }
        
        current = current->next;        
    }

    printf("Min: %.2f\n", min);

    /* Get the node that holds the minimum value */
    sort1_head = find_node(current, min); 

    if(sort1_head == NULL)
        printf("It's still null.\n");
    else
        printf("It's not null.\n");

    

     
}
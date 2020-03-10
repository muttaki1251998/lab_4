#include "header.h"

void create_list(int num_nodes)
{    
    int i = 0;   
    int j[num_nodes]; 
    double key1[num_nodes], key2[num_nodes];  
    Node *node = (Node *)malloc(sizeof(Node));
    
    if(node == NULL)
    {
        node->head = NULL;
    }
    

    for(i=0; i<num_nodes; i++)
    {        
        j[i] = rand_int(1, 10);

        key1[i] = rand_double(10.0, 50.0);

        key2[i] = rand_double(50.0, 90.0);
    }
    
    
    for(i=0; i<=num_nodes; i++)
    {           
        insert_node(node, j, key1, key2, num_nodes, i);
    }  


    while (node != NULL)
    {   
        printf("%d\n", node->value);
        printf("%.2f\n", node->key1);
        printf("%.2f\n", node->key2);

        node = node->next;        
    }  

}



/* Node (*f_ptr[])(Node, int, double, double) = {insert_node, insert_node}; 

for(i=1; i<=num_nodes; i++)
    {
        (f_ptr[i])(*node, i, key1, key2);
    }

     


*/
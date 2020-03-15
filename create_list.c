#include "header.h"

Node *create_list(int num_nodes)
{    
    int i = 0;   
    int j[num_nodes]; 
    double key1[num_nodes], key2[num_nodes];  
    Node *node = (Node *)malloc(sizeof(Node));   
       
    for(i=0; i<num_nodes; i++)
    {        
        j[i] = rand_int(1, 10);

        key1[i] = rand_double(10.0, 50.0);

        key2[i] = rand_double(50.0, 90.0);
    }

    node->value = j[0];
    node->key1 = key1[0];
    node->key2 = key2[0];
    
    
    for(i=1; i<num_nodes; i++)
    {           
        insert_node(node, j, key1, key2, num_nodes, i);
    }   

    return node;

}



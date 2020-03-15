#include "header.h"

int main(int argc, char *argv[])
{   
    srand(time(0));
    int num = 5;
    Node *node = NULL, *head = NULL;
    node =  create_list(num);

    head = node;
    print_node(node);

    node = head;
    printf("First node done\n"); 
    sort1_ascending(node);
    
    return 0;
}
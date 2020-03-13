#include "header.h"

int main(int argc, char *argv[])
{   
    srand(time(0));
    int num = 10;
    Node *node =  create_list(num);

    print_node(node);
    printf("First node done\n"); 
    sort1_ascending(node, 10);
    
    return 0;
}
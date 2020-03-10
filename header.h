#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Data
{
    int value;
    double key1;
    double key2;
    struct Data *head;
    struct Data *next;
    struct Data *sort1;
    struct Data *sort2;
} Node;

void create_list(int num_nodes);
double rand_double(double a, double b);
int rand_int(int a, int b);
Node *insert_node(Node *prev, int *i_value, double *key1, double *key2, int num_nodes, int loop);
main: print_node.o sort1_ascending.o create_list.o insert_node.o rand_double.o rand_int.o main.c
	gcc -ansi -Wall print_node.o sort1_ascending.o create_list.o insert_node.o rand_double.o rand_int.o main.c -o main

create_list.o: create_list.c
	gcc -ansi -Wall -c create_list.c
insert_node.o: insert_node.c
	gcc -ansi -Wall -c insert_node.c
rand_double.o: rand_double.c
	gcc -ansi -Wall -c rand_double.c
rand_int.o: rand_int.c 
	gcc -ansi -Wall -c rand_int.c
sort1_ascending.o: sort1_ascending.o
	gcc -ansi -Wall -c sort1_ascending.c 
print_node.o: print_node.o
	gcc -ansi -Wall -c print_node.c

clean:
	rm *.o main

	 

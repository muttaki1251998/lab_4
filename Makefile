main: create_list.o insert_node.o rand_double.o rand_int.o main.c
	gcc -ansi -Wall create_list.o insert_node.o rand_double.o rand_int.o main.c -o main

create_list.o: create_list.c
	gcc -ansi -Wall -c create_list.c
insert_node.o: insert_node.c
	gcc -ansi -Wall -c insert_node.c
rand_double.o: rand_double.c
	gcc -ansi -Wall -c rand_double.c
rand_int.o: rand_int.c 
	gcc -ansi -Wall -c rand_int.c

clean:
	rm *.o main
	 

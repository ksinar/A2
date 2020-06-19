all: a2_q1 a2_q2

a2_q1: a2_q1.c double_array.o randomize_array.o rand_double.o print_array.o free_array.o swap_rows.o swap_columns.o
	gcc -ansi -Wall -o a2_q1 double_array.o randomize_array.o rand_double.o print_array.o free_array.o swap_rows.o swap_columns.o a2_q1.c

a2_q2: a2_q2.c double_array.o randomize_array.o rand_double.o print_array.o free_array.o swap_rows.o swap_columns.o shallow_copy.o deep_copy.o print_struct.o
	gcc -ansi -Wall -o a2_q2 double_array.o randomize_array.o rand_double.o print_array.o free_array.o swap_rows.o swap_columns.o shallow_copy.o deep_copy.o print_struct.o a2_q2.c

double_array.o:
	gcc -ansi -Wall -c double_array.c

rand_double.o:
	gcc -ansi -Wall -c rand_double.c

randomize_array.o:
	gcc -ansi -Wall -c randomize_array.c

print_array.o:
	gcc -ansi -Wall -c print_array.c

free_array.o:
	gcc -ansi -Wall -c free_array.c

swap_rows.o:
	gcc -ansi -Wall -c swap_rows.c

swap_columns.o:	
	gcc -ansi -Wall -c swap_columns.c

shallow_copy.o:
	gcc -ansi -Wall -c shallow_copy.c

deep_copy.o:
	gcc -ansi -Wall -c deep_copy.c

print_struct.o:
	gcc -ansi -Wall -c print_struct.c

clean:

	rm *.o a2_q1 a2_q2
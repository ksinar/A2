#include "A2.h"

/* Code by: Kaan Sinar */


int main(){
    srand(time(NULL));
    printf("----------------------------\n\tQuestion 2a\n----------------------------\n");
    int rows = 6;
    int columns = 9;
    struct Double_Array* a1 = double_array(rows,columns);

    randomize_array(a1, 0.0, 10.0);

    printf("the address of a1 is %p\n", a1);

    print_struct(a1, "The structure pointed to by a1 is:");



    struct Double_Array* a2 = a1;

    printf("the address of a1 is %p\n", a2);

    print_struct(a2, "The structure pointed to by a2 is:");



    struct Double_Array* a_shallow = shallow_copy(a1);

    printf("the address of a_shallow is %p\n", a_shallow);

    print_struct(a_shallow, "The structure pointed by a_shallow is:");



    struct Double_Array* a_deep = deep_copy(a1);

    printf("the address of a_deep is %p\n", a_deep);

    print_struct(a_deep, "The structure pointed by a_deep is:");
 


    printf("\n\n\n");

    printf("----------------------------\n\tQuestion 2b\n----------------------------\n");

    a1->array[0][1] = 100.0;

    a2->array[1][2] = 200.0;

    a_shallow->array[2][3] = 300.0;

    a_deep->array[3][4] = 400.0;

    print_struct(a1, "a1");

    print_struct(a2, "a2");

    print_struct(a_shallow, "a_shallow");

    print_struct(a_deep, "a_deep");

    printf("\n\n\n");

    printf("----------------------------\n\tQuestion 2c\n----------------------------\n");

    struct Double_Array* b1 = double_array(rows, columns);

    randomize_array(b1, 10.0, 20.0);

    a2->array = b1->array;

    print_struct(a1, "a1");

    print_struct(a2, "a2");

    print_struct(a_shallow, "a_shallow");

    print_struct(a_deep, "a_deep");

    print_struct(b1, "b1");

    a1->array[0][1] = 5000.0;
    a2->array[1][2] = 6000.0;
    a_shallow->array[2][3] = 700.0;
    a_deep->array[3][4] = 8000.0;
    b1->array[4][5] = 9000.0;

    print_struct(a1, "a1");

    print_struct(a2, "a2");

    print_struct(a_shallow, "a_shallow");

    print_struct(a_deep, "a_deep");

    print_struct(b1, "b1");

    free_array(a1);

    free_array(a_shallow);

    free_array(a_deep);

    free(b1);

    a1 = NULL;

    a2 = NULL;

    a_shallow = NULL;

    a_deep = NULL;

    b1 = NULL;

    return 0;
}
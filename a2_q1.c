#include "A2.h"

/* Code by: Kaan Sinar */

int main(){
    srand(time(NULL));
    printf("----------------------------\n\tQuestion 1\n----------------------------\n");

    int rows = 6;
    int columns = 9;

    int swap_pos1 = 0;
    int swap_pos2 = 0;

    struct Double_Array* doubles = double_array(rows,columns);

    randomize_array(doubles, 0, 1000);

    print_array(doubles);

    /* makes sure its not swapping a row by itself */

    while(swap_pos1 == swap_pos2){

        swap_pos1 = rand() % rows;

        swap_pos2 = rand() % rows;

    }

    swap_rows(doubles, swap_pos1, swap_pos2);

    printf("Rows %i and %i were swapped.\n\n", swap_pos1, swap_pos2);

    print_array(doubles);

    swap_pos1 = 0;
    swap_pos2 = 0;

    /* makes sure its not swapping a column by itself */

    while(swap_pos1 == swap_pos2){

        swap_pos1 = rand() % columns;

        swap_pos2 = rand() % columns;

    }

    swap_columns(doubles, swap_pos1, swap_pos2);

    printf("Columns %i and %i were swapped.\n\n", swap_pos1, swap_pos2);

    print_array(doubles);

    printf("\n\n\n");

    free_array(doubles);

    return 0;

}
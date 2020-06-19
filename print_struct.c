#include "A2.h"

void print_struct(struct Double_Array * temp, char *question){

    /* printing information about the structure */

    printf("%s\n", question);

    printf("struct address = %p\n", temp);

    printf("row_size = %d, col_size = %d\n", temp->rowsize, temp->colsize);

    printf("array address = %p, with contents: \n\n", temp->array);

    print_array(temp);

    printf("\n\n");

}
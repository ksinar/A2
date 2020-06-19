#include "A2.h"

int swap_rows(struct Double_Array *temp, int row1, int row2){
    double *swap = NULL;

    /* checks if the parameters are going out of bounds */

    if((row1 > temp->rowsize) || (row2 > temp->rowsize)){
        return 0;
    }

    if((row1 < 0) || (row2 < 0)){
        return 0;
    }

    /* swaps the rows, this is the fast method because you can take an entire row by using one set of square brakets */

    swap = temp->array[row1];
    temp->array[row1] = temp->array[row2];
    temp->array[row2] = swap;
    return 1;
}
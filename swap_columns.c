#include "A2.h"

int swap_columns(struct Double_Array *temp, int col1, int col2){
    int i = 0;

    double swap = 0;

    /* checks for out of bonds parameters */

    if((col1 > temp->colsize) || (col2 > temp->colsize)){
        return 0;
    }

    if((col1 < 0) || (col2 < 0)){
        return 0;
    }

    /* the faster method for swapping rows won't work on swapping columns because you can't access
     an entire row at once, you can only use two square brackets and access each individual element*/

    for(i = 0; i < temp->rowsize; i++){
        swap = temp->array[i][col1];
        temp->array[i][col1] = temp->array[i][col2];
        temp->array[i][col2] = swap;
        swap = 0;
    }

    if(i == temp->rowsize){
        return 1;
    }else{
        return 0;
    }

}
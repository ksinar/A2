#include "A2.h"

struct Double_Array* double_array(int row, int col){

    int i = 0;

    /*alocating space for the array */

    struct Double_Array * myarray = malloc(sizeof(struct Double_Array));
    
    myarray->array = malloc(sizeof(double *) * row);

    for(i = 0; i < row; i++){
        myarray->array[i] = malloc(sizeof(double) * col);
    }

    myarray->rowsize = row;
    myarray->colsize = col;

    return myarray;
}
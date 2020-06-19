#include "A2.h"

void free_array(struct Double_Array *temp){
    int i = 0;

    /* freeing all pointers in an the struct and array */

    for(i = 0; i < temp->rowsize; i++){
        free(temp->array[i]);
        temp->array[i] = NULL;
    }

    free(temp->array);
    temp->array = NULL;

    free(temp);
    temp = NULL;
}
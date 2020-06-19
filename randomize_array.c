#include "A2.h"

void randomize_array(struct Double_Array* temp, double lower, double upper){
    int i = 0;
    int j = 0;

    /* randomizes all elemnts in the array within the bounds in the parameter */

    for(i = 0; i < temp->rowsize; i++){
        for (j = 0; j < temp->colsize; j++){
            temp->array[i][j] = rand_double(lower, upper);
        }
    }
}
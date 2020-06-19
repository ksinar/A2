#include "A2.h"

void print_array(struct Double_Array* temp){
    int i,j = 0;

    /* printing the array that the struct points to */

    for(i = 0; i < temp->rowsize; i++){
        for(j = 0; j < temp->colsize; j++){
            printf("%.1f\t", temp->array[i][j]);
        }
        printf("\n\n");
    }
}
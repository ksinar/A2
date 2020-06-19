#include "A2.h"

struct Double_Array* deep_copy(struct Double_Array *copy){
    struct Double_Array *dp_copy = malloc(sizeof(struct Double_Array));
    int i, j = 0;

    dp_copy->colsize = copy->colsize;

    dp_copy->rowsize = copy->rowsize;
    
    dp_copy->array = malloc(sizeof(double) * copy->rowsize);

    /* inserting all elements from one array into the other */
 
    for(i = 0; i < copy->rowsize; i++){
       
        dp_copy->array[i] = malloc(sizeof(double) * copy->colsize);

        for(j = 0; j < copy->colsize; j++){

            dp_copy->array[i][j] = copy->array[i][j];

        }

        
    }


    return dp_copy;
}

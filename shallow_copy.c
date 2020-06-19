#include "A2.h"

struct Double_Array* shallow_copy(struct Double_Array *copy){

    /* links to structures together and creates a shallow copy */

    struct Double_Array *shl_copy = malloc(sizeof(struct Double_Array));

    shl_copy->array = copy->array;
    shl_copy->rowsize = copy->rowsize;
    shl_copy->colsize = copy->colsize;

    return shl_copy;
}
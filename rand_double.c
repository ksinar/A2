#include "A2.h"

double rand_double(double a, double b){

    /* returns a random double between 2 parameters, if they are the same, it prints the second one */

    double random_num = 0;
    if(b > a){
        random_num = ((((double) rand()) / ((double) RAND_MAX) * (b - a) + a));
    }else if(b < a){
        random_num = ((((double) rand()) / ((double) RAND_MAX) * (a - b) + b));
    }else if(b == a){
        return b;
    }

    return random_num;
}

Question 1: 
    Purpose of the program is to create 2 2D arrays with doubles and make functions that swap 2 random rows and swap 2 random columns.

Q1a:
    this is the fast method because you can take an entire row by using one set of square brakets

Q1b:
    the faster method for swapping row won't work on swapping columns because you can't access 
    an entire row at once, you can only use two square brackets and access each individual element

Usage:
    ./a2_q1

Question 2:
    Purpose of the program is to understand how shallow and deep copy works, and implementing them in our code, creating copies of our structures and arrays.

Q2b:
    The changes made to a1, a2, and shallow copy appear on all of them except for the deep copy, because they all point to the same structure, but changes made to the deep copy only show on the deep copy, because of how a deep copy works.

Q2c:
    5000,6000, and 9000 show up on a1, a2 an b1 becase they are all linked. when we set a2->array = b1->array, we enlinked the shallow copy, therefore it will have the values 100,200, and 700 but the 700 will not reflect on any of the other arrays. deep copy will only have 8000 because it is a deep copy and isn't linked to any of the other structures.

Q2d:
    We first free a1, then the shallow copy. We have to free the shallow copy seperately because we unlinked it. Next we free the deep copy, and finally we free b1. We don't free a2 because it is still pointing to the same thing as b1, so by freeing b1, we freed a2. We then set all the pointer variables to NULL in order to make sure they don't point to some random point in memory. The order is important because we dont want to free something twice, or free something that points to a pointer before freeing the inner pointer, because then we won't be able to access and free that inner pointer later on and we will have a memory leak.

Usage:
    ./a2_q2
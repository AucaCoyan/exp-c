#include <stdio.h>

int main(void)
{
    int x = 4;

    // * (star) indicates the pointer name (not a var, a pointer)
    // & (ampersand) indicates the memory adress o the follow variable (or pointer, too)
    int *my_ptr = &x;

    // for demostrative purposes, you can print a var and its pointer to
    // show the address in memory
    printf("x=%d, my_ptr=%p\n", x, my_ptr);

    // when you use pointers in any other place other than it's declaration
    // you write a * to get the value that they point to
    // this is called a dereference
    printf("*my_ptr=%d\n", *my_ptr);

    // you can actually set a pointer to another pointer
    // so it references an address in memory
    int **my_d_ptr = &my_ptr;

    // to call the stack, you can do this
    // watch for the format types: %p, %p, %d
    printf("my_d_ptr=%p\n", my_d_ptr);
    printf("*my_d_ptr=%p\n", *my_d_ptr);
    printf("**my_d_ptr=%d\n", **my_d_ptr);

    return 0;
}
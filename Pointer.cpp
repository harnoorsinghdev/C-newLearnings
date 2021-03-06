& = ADDRESS, so &a means ADRESS AT a
* = DEREFERENCE ADDRESS OR VALUE AT, so * a means VALUE AT A

 also known as dereferenced, using the indirection operator or dereferencing operator


1. To declare a pointer use *  ex. int *ptr
2. To assign addres of variable use &    ex. sampleVariable==> int *ptr=&samVariable
3. To print address of variable samVariable --> int *ptr=&samVariable; cout<<ptr;
4. To print memory address of pointer---> cout<<&ptr



A PROGRAM WITH DOUBLE POINTERS

#include <stdio.h>

int main() {

    int  a = 10;
    int  *p1;       //this can store the address of variable a
    int  **p2; 
    /*
        this can store the address of pointer variable p1 only. 
        It cannot store the address of variable 'a' 
    */

    p1 = &a;
    p2 = &p1;

    printf("Address of a = %u\n", &a);
    printf("Address of p1 = %u\n", &p1);
    printf("Address of p2 = %u\n\n", &p2);

    // below print statement will give the address of 'a'
    printf("Value at the address stored by p2 = %u\n", *p2);
    
    printf("Value at the address stored by p1 = %d\n\n", *p1);

    printf("Value of **p2 = %d\n", **p2); //read this *(*p2)

    /*
        This is not allowed, it will give a compile time error-
        p2 = &a;
        printf("%u", p2);
    */
    return 0;
}

OUTPUT
Address of a = 2686724
Address of p1 = 2686728
Address of p2 = 2686732
Value at the address stored by p2 = 2686724
Value at the address stored by p1 = 10
Value of **p2 = 10


/*
 * FileName:     sample
 * Author:       8ucchiman
 * CreatedDate:  2023-05-11 23:36:25
 * LastModified: 2023-02-26 13:30:39 +0900
 * Reference:    8ucchiman.jp
 * Description:  ---
 */


#include <stdio.h>
#define MACRO



void A() {
    printf("I am function A\n");
}

void B(void (*ptr)()) {
    (*ptr) ();
}

#ifdef MACRO
int main(int argc, char* argv[]){
    void (*ptr)() = &A;

    B(ptr);
    return 0;
}
#endif


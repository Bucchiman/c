/*
 * FileName:     example_pointorfunc
 * Author:       8ucchiman
 * CreatedDate:  2023-05-16 15:54:58
 * LastModified: 2023-02-26 13:30:39 +0900
 * Reference:    https://daeudaeu.com/funcptr/
 * Description:  ---
 */


#include <stdio.h>
#define MACRO



int functionA(int a, char b, int* c) {
    return 0;
}

#ifdef MACRO
int main(int argc, char* argv[]){
    int x = 10;
    char y = 'y';
    int ret;
    int (*funcPtr)(int, char, int*);
    funcPtr = functionA;
    ret = funcPtr(x, y, &x);
    printf("ret: %d\n", ret);
    return 0;
}
#endif


/*
 * FileName:     example_callback
 * Author:       8ucchiman
 * CreatedDate:  2023-05-16 16:10:31
 * LastModified: 2023-02-26 13:30:39 +0900
 * Reference:    https://daeudaeu.com/funcptr/
 * Description:  ---
 */


#include <stdio.h>
#define MACRO


int add(int x, int y, int z) {
    return x+y+z;
}

int func(int (*callback)(int, int, int), int x) {
    return callback(x, x, x);
}

#ifdef MACRO
int main(int argc, char* argv[]){
    int ret;

    ret = func(add, 100);
    printf("ret = %d\n", ret);
    return 0;
}
#endif


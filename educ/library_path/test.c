/*
 * FileName:     test
 * Author:       8ucchiman
 * CreatedDate:  2023-10-30 11:19:28
 * LastModified: 2023-02-25 18:37:47 +0900
 * Reference:    https://sleepy-yoshi.hatenablog.com/entry/20090510/p1
 */


// test.c
#include <stdio.h>
#include "test.h"

void print_hoge (int num) {
    int i;
    for (i = 0; i < num; i++) {
        printf("hoge\n");
    }
}

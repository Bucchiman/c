/*
 * FileName:     myclass
 * Author:       8ucchiman
 * CreatedDate:  2023-05-16 18:14:19
 * LastModified: 2023-03-28 10:34:14 +0900
 * Reference:    8ucchiman.jp
 * Description:  ---
 */


#include<stdio.h>

typedef struct {
    int input1;
    int input2;
    int (*calc)(void);
    void (*input)(int, int);
} CALCULATOR_T;

int add(void);
int sub(void);
int mul(void);
int div(void);

void input(int, int);
CALCULATOR_T *newCalc(int);
void delCalc(void);

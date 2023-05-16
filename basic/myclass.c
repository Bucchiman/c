/*
 * FileName:     myclass
 * Author:       8ucchiman
 * CreatedDate:  2023-05-16 18:17:38
 * LastModified: 2023-02-26 13:30:39 +0900
 * Reference:    8ucchiman.jp
 * Description:  ---
 */


#include <stdio.h>
#include "myclass.h"
#define MACRO

CALCULATOR_T calculator;

int add(void) {
    return calculator.input1 + calculator.input2;
}

int sub(void) {
    return calculator.input1 - calculator.input2;
}

int mul(void) {
    return calculator.input1 * calculator.input2;
}

int div(void) {
    return calculator.input1 / calculator.input2;
}

void input(int in1, int in2) {
    calculator.input1 = in1;
    calculator.input2 = in2;
}

CALCULATOR_T *newCalc(int type) {
    calculator.input = input;

    switch(type) {
        case 1:
            calculator.calc = add;
            break;
        case 2:
            calculator.calc = sub;
            break;
        case 3:
            calculator.calc = mul;
            break;
        case 4:
            calculator.calc = div;
            break;
        default:
            return NULL;
    }
    return &calculator;
}

void delCalc(void) {
    calculator.input = NULL;
    calculator.calc = NULL;
}


/*#ifdef MACRO
int main(int argc, char* argv[]){
    
    return 0;
}
#endif*/

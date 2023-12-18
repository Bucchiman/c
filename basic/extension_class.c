/*
 * FileName:     extension_class
 * Author:       8ucchiman
 * CreatedDate:  2023-05-16 18:14:06
 * LastModified: 2023-02-26 13:30:39 +0900
 * Reference:    8ucchiman.jp
 * Description:  ---
 */


//#include <stdio.h>
#include "myclass.h"
#define MACRO


#ifdef MACRO
int main(int argc, char* argv[]){
    int type;
    int in1;
    int in2;
    int ans;
    CALCULATOR_T* calculator;

    scanf("%d", &type);
    if (type > 4 || type < 1) {
        return -1;
    }
    calculator = newCalc(type);

    scanf("%d", &in1);
    scanf("%d", &in2);


    calculator->input(in1, in2);
    ans = calculator->calc();

    printf("%d\n", ans);
    delCalc();


    return 0;
}
#endif


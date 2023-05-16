/*
 * FileName:     calc
 * Author:       8ucchiman
 * CreatedDate:  2023-05-16 16:01:36
 * LastModified: 2023-02-26 13:30:39 +0900
 * Reference:    https://daeudaeu.com/funcptr/
 * Description:  ---
 */


#include <stdio.h>
int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);
#define MACRO


int add(int input1, int input2) {
    printf("execute %d + %d\n", input1, input2);
    return input1+input2;
}

int sub(int input1, int input2) {
    printf("execute %d - %d\n", input1, input2);
    return input1-input2;
}

int mul(int input1, int input2) {
    printf("execute %d x %d\n", input1, input2);
    return input1*input2;
}

int div(int input1, int input2) {
    printf("execute %d / %d\n", input1, input2);
    return input1/input2;
}

#ifdef MACRO
int main(int argc, char* argv[]){
    int in1;
    int in2;
    int ans;
    int (*func)(int, int);
    int (*funcarray[4])(int, int);

    scanf("%d", &in1);
    scanf("%d", &in2);

    func = add;
    ans = func(in1, in2);
    printf("answer is %d\n", ans);

    funcarray[0] = add;
    funcarray[1] = sub;
    funcarray[2] = mul;
    funcarray[3] = div;

    for(int i=0; i<4; i++) {
        ans = funcarray[i](in1, in2);
        printf("answer is %d\n", ans);
    }


    return 0;
}
#endif


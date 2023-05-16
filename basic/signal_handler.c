/*
 * FileName:     signal_handler
 * Author:       8ucchiman
 * CreatedDate:  2023-05-16 16:13:03
 * LastModified: 2023-02-26 13:30:39 +0900
 * Reference:    8ucchiman.jp
 * Description:  ---
 */


#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#define MACRO

int a = 0;

void signalHandler(int signum) {
    a = 100;
}

#ifdef MACRO
int main(int argc, char* argv[]){
    void* ret;
    printf("%d", SIGINT);
    ret = signal(SIGINT, signalHandler);   // 第一引数手指定されたシグナルを受信した際に、第二引数で指定されたアドレスの関数を実行
    if(ret == SIG_ERR) {
        return -1;
    }
    for (int i=0; i<10; i++) {
        printf("a=%d\n", a);
        usleep(100000);
    }
    return 0;
}
#endif


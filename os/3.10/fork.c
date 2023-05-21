/*
 * FileName:     fork
 * Author:       8ucchiman
 * CreatedDate:  2023-05-21 23:13:46
 * LastModified: 2023-02-26 13:30:39 +0900
 * Reference:    オペレーティングシステムの仕組み  河野健二
 * Description:  ---
 */


#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#define MACRO

#ifdef MACRO
int main(int argc, char* argv[]){
    pid_t pid;
    int status;
    printf("P: parent\n");
    sleep(10);
    if ((pid = fork()) != 0) {
        printf("P: child created\n");
        wait(&status);
        printf("P: child exited\n");
        sleep(10);
    }
    else {
        printf("C: child\n");
        sleep(10);
        printf("C: exiting\n");
        exit(0);
    }
    return 0;
}
#endif


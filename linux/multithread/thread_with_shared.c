/*
 * FileName:     thread_with_shared
 * Author:       8ucchiman
 * CreatedDate:  2023-05-21 23:52:37
 * LastModified: 2023-02-26 13:30:39 +0900
 * Reference:    オペレーティングシステムの仕組み 河野健二
 * Description:  ---
 */


#include <stdio.h>
#include <pthread.h>
#define MACRO
#define MAX_COUNT 10
int count = 0;


void* thread1(void* arg) {
    for(;;) {
        printf("Thread A\n");
        count++;
        if (count > MAX_COUNT) {
            return NULL;
        }
    }
}

void* thread2(void* arg) {
    for(;;) {
        printf("Thread B\n");
        count++;
        if (count > MAX_COUNT) {
            return NULL;
        }
    }

}

#ifdef MACRO
int main(int argc, char* argv[]){
    pthread_t a, b;

    pthread_create(&a, NULL, thread1, NULL);

    pthread_create(&b, NULL, thread2, NULL);

    pthread_join(a, NULL);
    pthread_join(b, NULL);
    return 0;
}
#endif


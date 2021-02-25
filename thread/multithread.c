//
// Created by yu on 2020/12/9.
//


# include <stdio.h>
# include "stdlib.h"
# include "unistd.h"
# include "pthread.h"

// Let us create a global variable to change it in threads
int g = 0;

// The function to be executed by all threads
void *myThreadFun(void *vargp) {
    // Store the value argument passed to this thread
    int *myid = (int *) vargp;

    // Let us create a static variable to observe its changes
    static int s = 0;

    // Change static and global variables
    ++s;
    ++g;

    // Print the argument, static and global variables
    printf("Thread ID: %d, Static: %d, Global: %d\n", *myid, ++s, ++g);
}

int main() {
    int i;
    pthread_t thread_id;
    printf("Before Thread\n");
    for (int i = 0; i < 3; i++) {
        //第一个参数是线程，第二是是属性，第三个是线程的执行方法，第四个是线程参数
        pthread_create(&thread_id, NULL, myThreadFun, NULL);
    };
    printf("After Thread\n");
    pthread_exit(NULL);
    return 0;
}


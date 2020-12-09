//
// Created by yu on 2020/12/9.
//

# include "stdio.h"
# include "stdlib.h"
# include "pthread.h"

void *func(void *args) {
    // detach the current thread
    // from the calling thread
    pthread_detach(pthread_self());
    printf("Inside the thread\n");
    // exit the current thread
    pthread_exit(NULL);
}

void fun() {
    pthread_t ptid;
    pthread_create(&ptid, NULL, &func, NULL);
    printf("This line may be printed"
           " before thread terminates\n");
    // The following line terminates
    // the thread manually
    // pthread_cancel(ptid);
    // compare the tow threads create
    if (pthread_equal(ptid, pthread_self())) {
        printf("thread are equal.")
    } else {
        printf("thread are not equal.")
    }
    pthread_exit(NULL)

}

int main() {
    fun();
    return 0;
}
//
// Created by TCLDUSER on 2023/1/13.
//

#include "stdio.h"
int main(){
    const char * msg = "Don't be a fool";
    const char * copy;
    copy = msg;
    printf("%s\n",copy);
    // 打印指针的地址和值
    printf("msg = %s; &msg = %p; value=%p \n",msg,&msg,msg);
    printf("copy = %s; &copy = %p; value=%p \n",copy,&copy,copy);
    return 0;
}
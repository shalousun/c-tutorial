//
// Created by TCLDUSER on 2023/1/14.
//
#include "stdio.h"
#include "string.h"

#define MAXTITL 41 /* 书名的最大长度 +1 */
#define MAXMUTL 31 /* 作者姓名的最大长度*/
#define MAXBKS 100  /* 书籍最大数量*/

char * s_gets(char * st,int n);

struct book {
    char title[MAXTITL];
    char author[MAXMUTL];
    float value;
};

int main(void ) {
    struct book library[MAXBKS]; /* book类型结构的数组*/
    int count = 0;
    int index;
    printf("Please enter the book title.\n");
    printf("Press [enter] at the start of a line to stop.\n");
    while (count < MAXBKS && s_gets(library[count].title,MAXTITL)!=NULL
    && library[count].title[0] != '\0') {
        printf("Now enter the author.\n");
        s_gets(library[count].author,MAXMUTL);
        printf("Now enter the value.\n");
        scanf("%f",&library[count++].value);
        while (getchar() != '\n')
            continue;
        if (count < MAXBKS) {
            printf("Enter the next title.\n");
        }
    }
    if (count > 0) {
        printf("Here is the list of your books:\n");
        for (index =0;index < count;index ++) {
            printf("%s by %s: $%.2f\n",library[index].title,library[index].author,library[index].value);
        }
    } else {
        printf("No books? Too bad. \n");
    }
    return 0;
}

char *s_gets(char *st, int n) {
    char *ret_val;
    char *find;
    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        find = strchr(st, '\n'); //
        if (find) {
            *find = '\0';
        } else {
            while (getchar() != '\n')
                continue;
        }
    }
    return ret_val;
}

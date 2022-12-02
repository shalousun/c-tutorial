/* friends.c -- uses pointer to a structure */
#include <stdio.h>
#define LEN 20

struct names {
    char first[LEN];
    char last[LEN];
};

struct guy {
    struct names handle;
    char favfood[LEN];
    char job[LEN];
    float income;
};

int main(void)
{
    struct guy fellow[2] = {
        {{ "Ewen", "Villard"},
            "grilled salmon",
            "personality coach",
            68112.00
        },
        {{"Rodney", "Swillbelly"},
            "tripe",
            "tabloid editor",
            432400.00
        }
    };
    struct guy * him;    /* here is a pointer to a structure */
    
    printf("address #1: %p #2: %p\n", &fellow[0], &fellow[1]);
    him = &fellow[0];    /* tell the pointer where to point  */
    printf("pointer #1: %p #2: %p\n", him, him + 1);
    printf("him->income is $%.2f: (*him).income is $%.2f\n",
           him->income, (*him).income);//him是一个指针，不是结构体，因此使用->访问
    him++;               /* point to the next structure 执行下一个结构体      */
    printf("him->favfood is %s:  him->handle.last is %s\n",
           him->favfood, him->handle.last);
    // (*him).income == him->income
    return 0;
}

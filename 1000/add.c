/*===============================================================
*   文件名称：add.c
*   创建日期：2016年02月06日
================================================================*/
//#include "add.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 0;
    int b = 0;

    while(EOF != scanf("%d %d", &a, &b))
    {
        printf("%d\n", a + b);
    }

    return 0;
}

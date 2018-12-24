#include "stdio.h"
#include "a.h"
#include "b.h"



int test_pro(void)
{
    printf("####################test_pro####################\r\n");
    printf("this is a makefile test\r\n");
    a_func();
    b_func();
    printf("#####################end#####################\r\n");
    return 1;
}
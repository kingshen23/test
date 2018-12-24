#include "stdio.h"
#include "a.h"
#include "b.h"


int test_pro(void);

int main()
{
  printf("####################start####################\r\n");
  printf("this is a makefile test\r\n");
  a_func();
  b_func();
  printf("#####################end#####################\r\n");

  test_pro();
  return 1;
}

#include "stdio.h"
#include "sub1.h"
#include "sub2.h"
#include "sub3.h"

int main()
{
  printf("####################start####################\r\n");
  printf("this is a makefile test\r\n");
  a_func();
  b_func();
  c_func();
  printf("#####################end#####################\r\n");
  return 1;
}

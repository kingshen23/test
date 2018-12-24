#include "stdio.h"
#include "d.h"


int d_init(void)
{
  printk("this is d.c d_init\r\n");
  return 1;
}

int d_func(void)
{
  printk("this is d.c d_func\r\n");
  return 1;
}
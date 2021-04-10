#include<stdio.h>
int main()
{
  int a = 10;
  int b = 30;
  a = a + b;//a=10+30=40
  b = a - b;//b=40-30=10
  a = a - b;//a=40-10=30
  printf("After swapping, a is:%d", a);
  printf("After swapping, b is:%d", b);
  return 0;
}

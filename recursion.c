#include<stdio.h>
int p(int n, int m)
{

  if(m==0 || n<0)
    return 0;
  if(n==0||m==1)
    return 1;
  return p(n, m-1)+p(n-m, m);
}

void main()
{
  printf("%d", p(6,1));
}

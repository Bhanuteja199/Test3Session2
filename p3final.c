/*Write a program find the nCr given n and r.
int input_n_and_r(int *n, int *r)
int ncr(int n, int r);
void output(int n, int r, int result);*/
#include<stdio.h>
void input(int *n,int *r)
{
  printf("N=\n");
  scanf("%d",n);
  printf("R=\n");
  scanf("%d",r);
}
int factorial(int a)
{
  int fact=1;
  for(int i=1;i<=a;i++)
    {
      fact=fact*i;
    }
  return fact;
}
int ncr(int n,int r)
{
  int result;
  result=factorial(n)/(factorial(n-r)*factorial(r));
  return result;
}
void output(int n,int r,int result)
{
  printf("%d C %d= %d",n,r,result);
}
int main()
{
  int n,r,result;
  input(&n,&r);
  result=ncr(n,r);
  output(n,r,result);
  return 0;
}
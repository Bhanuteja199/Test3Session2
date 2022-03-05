


#include<stdio.h>
struct _fraction
{
  int num,den;
};
typedef struct _fraction Fraction;
Fraction input_fraction()
{
  Fraction a;
  printf("NUMERATOR= \n");
  scanf("%d",&a.num);
  printf("DENOMINATOR= \n");
  scanf("%d",&a.den);
  return a;
}
Fraction Largest(Fraction f1, Fraction f2, Fraction f3)
{
  Fraction large;
  float y1,y2,y3,great;
  y1=(float)f1.num/f1.den;
  y2=(float)f2.num/f2.den;
  y3=(float)f3.num/f3.den;
  great=(y1>y2)?(y1>y3?y1:y3):(y2>y3?y2:y3);
  if(great==y1)
  {
    large.num=f1.num;
    large.den=f1.den;
  }
  else if(great==y2)
  {
    large.num=f2.num;
    large.den=f2.den;
  }
  else{
    large.num=f3.num;
    large.den=f3.den;
  }
  return large;
}
void output(Fraction f1, Fraction f2, Fraction f3, Fraction largest)
{
  printf("Largest= %d/%d\n",largest.num,largest.den);
}
int main()
{
  Fraction f1,f2,f3,large;
  f1=input_fraction();
  f2=input_fraction();
  f3=input_fraction();
  large=Largest(f1,f2,f3);
  output(f1,f2,f3,large);
  return 0;
}
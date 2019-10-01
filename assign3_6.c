#include<stdio.h>

int main()

{ int a,b,c;
  printf("Enter a floating point number having three integral part\n");
  scanf("%d",&a);
  b=(a%100);
  c=a%10;
  printf("The right most digits of the integral part of the number=%d\nThe two right most digits of the integral part of the number=%d\nAll the digits of the integral part of the number=%d",c,b,a);
}

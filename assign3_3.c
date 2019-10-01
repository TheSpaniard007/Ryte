#include<stdio.h>
#include<math.h>

float main()

{ float x,r,a,b;
  printf("Enter a number(x) in degrees\n");
  scanf("%f",&x);
  r=(M_PI/180)*x;
  a=sin(r);
  printf("The value of sin(x)=%f",a);
  b=cos(r);
  printf("The value of cos(x)=%f",b);
}



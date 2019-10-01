#include<stdio.h>

int main()

{ int n,rn;
  printf("Enter a three digit integer number\n");
  scanf("%d",&n);
  rn=((n%10)*100)+(((n%100)/10)*10)+(n/100);
  printf("The reversed number=%d",rn);
  }

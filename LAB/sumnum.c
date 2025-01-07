#include<stdio.h>
int main()
{
 int i,sum;
 int n;
 printf("enter the number:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
   sum=sum+i;
  }
  printf("sum=%d",sum);
  return(0);
}

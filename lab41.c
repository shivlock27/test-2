#include<stdio.h>
int main()
{
  int n,n1,n2,n3;
  scanf("%d",&n);
  printf("1 ");
  n1=0;
  n2=1;

  for(int i=2;i<=n;i++)
   {
     n3=n2+n1;
     printf("%d ",n3);
     n1=n2;
     n2=n3;
   }
   return 0;
}

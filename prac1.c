#include<stdio.h>
#include<string.h>
void fibon(int a,int b,int n)
{
	  int sum=a+b;
	  if(n>0)
	  {
	      printf("%d ",sum);
	      fibon(b,sum,n-1);
	  }



	  
	     
	  else 
	  return ;
}
int main()
{
	int num;
	int a,b;
	a=0;b=1;
	scanf("%d",&num);
	printf("%d %d ",a,b);
    fibon(a,b,(num-2));
    return 0;
    		  
}
	  
  

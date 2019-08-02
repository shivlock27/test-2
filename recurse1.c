#include<stdio.h>
int count=0;
void rec(int count,char ch)
{
   scanf("%c",&ch);
	if(ch!=10)
    {
        if(count!=0)
	    printf(" ");	
            
    	if(ch>=48&&ch<=57)
    	{
    		count=0;
    		printf("%c",ch);
    	}
    	else
        {
    	count++;
        }
		
	    rec(count,ch);
     }	    
	
}
int main()
{
	char ch=' ';
	rec(0,ch);
	return 0;
}
	

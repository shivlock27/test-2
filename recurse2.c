#include<stdio.h>
int count=0;
int p=0;
void rec(int count,char ch,int p)
{
    
	if(ch>=48&&ch<=57)   
	p=0;
	else
	p=1;

	scanf("%c",&ch);
	if(ch!=10)
    {
        	
            
    	if(ch>=48&&ch<=57)
    	{
    		count=0;
                if(count==0&&p==0)
    	         printf("%c",ch);
	
    	}
    	else
    	count=1;\
	 
	if(count==1&&p==0)
	    printf(" ");
       	rec(count,ch,p);
	
	
     }	    
	
}
int main()
{
	char ch=' ';
	rec(0,ch,0);
	return 0;
}
	

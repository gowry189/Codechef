#include <stdio.h> 
#include <math.h>
 
int main() {
	int x1,y1,x2,y2,x3,y3,r1,r2,r3,c=0,t,i;
	scanf("\n%d",&t);
    for(i=1;i<=t;i++)
    {  scanf("\n%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
       
       r1=pow((x2-x1),2)+pow((y2-y1),2);
	   r2=pow((x3-x2),2)+pow((y3-y2),2);
	   r3=pow((x3-x1),2)+pow((y3-y1),2);
	   if(r1>r2 && r1>r3)
	   		
		{
			if(r1==r2+r3)
			c=c+1;
		}
		else if((r2>r1)&&(r2>r3))
		{
			if(r2==r1+r3)
			c=c+1;
		}
		else
		{
			if(r3==r1+r2)
			c=c+1;
		}
	}
	printf("%d",c);
	return 0;
}       

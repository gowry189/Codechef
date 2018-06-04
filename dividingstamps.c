    #include <stdio.h>
    int main(void) {
    	int mem,s=0,b=0;
    	scanf("%d",&mem);
    	int c[mem];
    	for(int i=1;i<=mem;i++)
    	{
    	      scanf("%d",&c[i]);
    	      s=s+c[i];
    	      b=b+i;
    	      
    	  }
    	  if(s==b)
    	  printf("YES");
    	  else
    	  printf("NO");
    	  
    	
    return 0;	  
    	 }  

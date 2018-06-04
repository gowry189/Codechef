    #include<stdio.h>
     int main()
      {
      	int testcase,limak,i,bob;
      	scanf("%d",&testcase);
      	while(testcase--){
      		scanf("%d%d",&limak,&bob);
      		
      	   for(i=1;limak>=0&&bob>=0;i++)
      	   {
      	       if(i%2)
      	              {
      	           limak=limak-i;
      	       }
      	       
      	       else
      	       {
      	           bob=bob-i;
      	       }
      	   }
      	   
      	   if(limak>=0)
      	    printf("Limak\n");
      	   else
      	    printf("Bob\n"); 
      		
      	}
      		   return 0;
        }  

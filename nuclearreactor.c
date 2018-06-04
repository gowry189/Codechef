    #include <stdio.h>
     
    int main()
    {
    	int a,n,k,i;
    	scanf("%d %d %d", &a, &n, &k);
    	n+=1;
            for (i = 0; i < k; i++)
           {
    	  printf("%d ", a%n);
    	  a /= n;
    	}
    	printf("\n");
    	
    	return 0;
    }	
     

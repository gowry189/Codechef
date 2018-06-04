    #include<stdio.h>
    int main()
    {
    int n,k,i,c=0;
    scanf("%d %d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    if (a[i]%k==0)
    c=c+1;
    }
    printf("%d \n",c);
     
    return 0;
        
    }	 

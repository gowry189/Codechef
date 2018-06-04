    #include<stdio.h>
    int main()
    {
        int n,tC,l;
        scanf("%d",&tC);
        while(tC--)
        {
            int s=0;
            scanf("%d",&n);
            while(n!=0)
            {
                l=n%10;
                s+=l;
                n=n/10;
            }
            printf("\n%d",s);
        }
        return 0;
    }  

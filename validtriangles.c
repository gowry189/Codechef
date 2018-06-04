    #include <stdio.h>
     
    int main()
    {
        int t,i,a,b,c,s;
        scanf("%d",&t);
        for(i=0;i<t;i++)
        {
        scanf("%d\t%d\t%d",&a,&b,&c);
        s=a+b+c;
        if(s==180&&a>0&&b>0&&c>0)
        printf("YES\n");
        else
        printf("NO\n");
        }
    return 0;    
    } 

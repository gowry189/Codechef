#include <stdio.h>
int main()
{
    int m,n,t,rem=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d%d",&m,&n);
        if(m>n)
        rem=m-n;
        else
        rem=n-m;
        printf("%d\n",rem);
    }
    return 0;
}

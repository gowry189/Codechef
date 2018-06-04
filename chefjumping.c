#include <stdio.h>
int main(void) 
{
    long long pos,r;
    scanf("%lld",&pos);
    r=pos%6;
    if(r==1||r==0||r==3)
    printf("yes");
    else
    printf("no");
	return 0;
}
 

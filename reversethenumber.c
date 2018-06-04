    #include<stdio.h>
    int main()
    {
     int tc;
     scanf("%d",&tc);
     while(tc--)
     {
      int num,l,s=0;
      scanf("%d",&num);
      while(num!=0)
      {
       l=num%10;
       s=(s*10)+l;
       num=num/10;
      }
      printf("\n%d",s);
     }
     return 0;
    }  

    #include <bits/stdc++.h>
    using namespace std;
     
    int main() 
    {
    int n;
    int i,j,smallindex,temp;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
     
    for(i=0;i<n;i++)
    cout<<a[i]<<endl;
    	return 0;
    }
     
     

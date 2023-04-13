#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,n,i;
	cin>>T;
	while(T--)
	{
	    cin>>n;
	    int A[n];
	    for(i=0;i<n;i++)
	        cin>>A[i];
	    
	    sort(A,A+n);
	    int c=n;
	    for(i=1;i<n;i++)
	    {
	        if(A[i]==A[i-1])
	            c--;
	    }
	    cout<<c<<endl;
	}
	return 0;
}

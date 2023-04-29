#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--){
	    int size;
	    cin>>size;
	    vector<int>arr(size);
	    for(int i=0;i<size;i++){
	        cin>>arr[i];
	    }
	    vector<int>diff(size-1);
	    for(int i=0;i<size-1;i++){
	        diff[i]=abs(arr[i]-arr[i+1]);
	        
	    }
	    int opt_score=INT_MAX;
	    if(size>=2){
	        opt_score=min(opt_score,diff[0]);
	        
	    }
	    if(size>=2){
	        opt_score=min(opt_score,diff[size-2]);
	        
	    }
	    for(int i=1;i<size-1;i++){
	        int max_diff=max(diff[i-1],diff[i]);
	        opt_score=min(opt_score,max_diff);
	        
	    }
	    cout<<opt_score<<endl;
	}
	return 0;
}

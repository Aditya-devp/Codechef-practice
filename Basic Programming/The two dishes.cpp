#include <iostream>
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--){
	    int n,a,b,c;
	    cin>>n>>a>>b>>c;
	    if((a+c)>=n &&b>=n){
	        cout<<"Yes"<<endl;
	        
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}

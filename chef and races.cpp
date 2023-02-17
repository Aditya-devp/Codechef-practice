#include <iostream>
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(a==c&&b==d||b==c&&a==d){
	        cout<<0<<endl;
	    }
	    else if(a==c||a==d){
	        cout<<1<<endl;
	    }
	    else if(b==c||b==d) {
	        cout<<1<<endl;
	    }
	    else{
	        cout<<2<<endl;
	    }
	}
	return 0;
}

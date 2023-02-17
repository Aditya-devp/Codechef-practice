#include <iostream>
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--){
	    int a,red,c,d;
	    cin>>a>>red>>c>>d;
	   
	    int blue=a-red;
	    if(c<d){
	        cout<<c*a<<endl;
	    }
	    else{
	    cout<<(red*c)+(blue*d)<<endl;
	    }
	}
	return 0;
}

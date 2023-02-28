#include <iostream>
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--){
	    int a;
	    cin>>a;
	    if(a>20){
	        cout<<"Hot"<<endl;
	    }
	    else{
	        cout<<"Cold"<<endl;
	    }
	}
	return 0;
}

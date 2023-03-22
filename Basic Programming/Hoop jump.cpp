#include <iostream>
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--){
	    int a;
	    cin>>a;
	    if(a==1){
	        cout<<"1"<<endl;
	    }
	    else{
	        cout<<(a/2)+1<<endl;
	    }
	}
	return 0;
}

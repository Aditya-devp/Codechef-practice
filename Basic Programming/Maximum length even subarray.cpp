#include <iostream>
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--){
	    int n;
	    cin>>n;
	    int sum=n*(n+1)/2;
	    if(sum%2==0){
	        cout<<n<<endl;
	    }
	    else{
	        cout<<n-1<<endl;
	    }
	}
	return 0;
}

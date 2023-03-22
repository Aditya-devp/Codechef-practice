#include <iostream>
using namespace std;

int main() {
int test;
cin>>test;
while(test--){
    int n,max;
    cin>>n>>max;
    if(n>=max){
        cout<<max<<endl;
    }
    else{
        cout<<n-(max-n)<<endl;
    }
}
	return 0;
}

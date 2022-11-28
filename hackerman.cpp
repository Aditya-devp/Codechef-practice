#include <iostream>
using namespace std;

int main() {
int test,a,b;
cin>>test;
while(test--){
    cin>>a>>b;
    if(a+b==2||a+b==3||a+b==5||a+b==7||a+b==11){
        cout<<"Alice"<<endl;
    }
    else{
        cout<<"Bob"<<endl;
    }
}
	return 0;
}

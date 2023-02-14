#include <iostream>
using namespace std;

int main() {
int test;
cin>>test;
while(test--){
    int a;
    cin>>a;
    if(a<3){
        cout<<"LIGHT"<<endl;
    }
    else if(a>=7){
        cout<<"Heavy"<<endl;
    }
    else{
        cout<<"Moderate"<<endl;
    }
}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
int test;
cin>>test;
while(test--){
    int memory,app1,app2,app3,freemem;
    cin>>memory>>app1>>app2>>app3;
    freemem=memory-(app1+app2);
    if(freemem>=app3){
        cout<<0<<endl;
    }
    else if(freemem<app3&&(app1+freemem>=app3||app2+freemem>=app3)){
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
    }
}
	return 0;
}

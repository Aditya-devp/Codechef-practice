#include <bits/stdc++.h>
using namespace std;

int main() {
int test;
cin>>test;
while(test--){
    int a,b;
    cin>>a>>b;
    if(a<=6){
        cout<<b<<endl;
    }
    else if(a%6==0){
        cout<<(a/6)*b<<endl;
    }
    else{
        cout<<((a/6)+1)*b<<endl;
    }
}
	return 0;
}

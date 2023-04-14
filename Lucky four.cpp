#include <iostream>
using namespace std;

int main() {
int test;
cin>>test;
while(test--){
    int a;
    cin>>a;
    int count=0;
    while(a!=0){
        int rem=a%10;
        if(rem==4){
            count++;
            
        }
        a/=10;
    }
    cout<<count<<endl;
}
	return 0;
}

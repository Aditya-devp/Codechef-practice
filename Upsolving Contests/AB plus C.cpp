#include <iostream>
using namespace std;
int main() {
int test;
cin>>test;
while(test--){
    long long x;
    cin>>x;
    if(x==1){
          cout<<-1<<endl;
    }
  else  if(x<=1000000){
        cout<<1<<" "<<x-1<<" "<<1<<endl;
    }
    else if(x%1000000==0){
        cout<<(x/1000000)-1<<" "<<1000000<<" "<<1000000<<endl;
    }
    else{
        cout<<(x/1000000)<<" "<<1000000<<" "<<x%1000000<<endl;
    }
}
	return 0;
}

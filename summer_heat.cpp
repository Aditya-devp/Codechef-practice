#include <iostream>
using namespace std;

int main() {
int test,water,pulp,rqwater,rqpulp,ans;
cin>>test;
while(test--){
    cin>>water>>pulp>>rqwater>>rqpulp;
    ans=(rqwater/water)+(rqpulp/pulp);
    cout<<ans<<endl;
}
	return 0;
}

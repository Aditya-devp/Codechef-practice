#include <iostream>
using namespace std;

int main() {
int test;
cin>>test;
while(test--){
    int a,b,c,ab,bc;
    cin>>a>>b>>c;
   cout<<(a+b+c)-min(a,min(b,c))<<endl;
}
	return 0;
}

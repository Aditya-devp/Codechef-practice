#include <iostream>
using namespace std;

int main() {
int test;
cin>>test;
while(test--){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>=b&&a<=c){
        cout<<"Take second dose now"<<endl;
    }
    else if(a<b&&a<c){
        cout<<"Too Early"<<endl;
    }
    else{
        cout<<"Too Late"<<endl;
    }
}
	return 0;
}

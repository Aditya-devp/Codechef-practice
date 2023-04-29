#include <iostream>
using namespace std;

int main() {
int test;
cin>>test;
while(test--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ones=0,zeros=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            ones++;
        }
        else{
            zeros++;
        }
    }
    int ans=min(ones,zeros);
    if(ans%2==0){
        cout<<"Ramos"<<endl;
    }
    else{
        cout<<"Zlatan"<<endl;
    }
}
	return 0;
}

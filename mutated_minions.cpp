#include <iostream>
using namespace std;

int main() {
	int test,num,k,temp;
	cin>>test;
	while(test--){
	    cin>>num>>k;
	int count=0;
	for(int i=0;i<num;i++){
	    cin>>temp;
	    if((temp+k)%7==0)
	        count++;
	}
	cout<<count<<endl;
	}
	
	
}

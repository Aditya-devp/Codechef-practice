#include <iostream>
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--){
	    double a,b,c,d,price;
	    cin>>a>>b>>c>>d;
	double per= (d/100)*a;
	  
	   price=a+per;
	    if(price>=b&&price<=c){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}

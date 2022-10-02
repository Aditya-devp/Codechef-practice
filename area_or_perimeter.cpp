#include <iostream>
using namespace std;

int main() {
	int len,bd,perim=0,area=0;
	cin>>len>>bd;
	perim=2*(len+bd);
	area=len*bd;
	if(area==perim){
	    cout<<"Eq"<<endl;
	    cout<<area;
	}
	else if(area>perim){
	    cout<<"Area"<<endl;
	    cout<<area;
	}
	else{
	    cout<<"Peri"<<endl;
	    cout<<perim;
	}
	
	return 0;
}

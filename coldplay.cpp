#include <iostream>
using namespace std;

int main() {
	int test,min,song,ans;
	cin>>test;
	while(test--){
	    cin>>min>>song;
	    ans=min/song;
	    cout<<ans<<endl;
	}
	
	return 0;
}

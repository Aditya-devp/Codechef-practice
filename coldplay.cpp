// Solution for the coldplay question on codechef 

#include <iostream>
using namespace std;

int main() {
	int test,min,song,ans;
	cin>>t;
	while(t--){
	    cin>>min>>song;
	    ans=min/song;
	    cout<<ans<<endl;
	}
	
	return 0;
}

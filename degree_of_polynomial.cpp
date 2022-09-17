#include <iostream>
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--){
	    int n;
	    cin>>n;
	    int arr[n];
	    int high=0;
	    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int a=n-1;a>0;a--){
      if(arr[a]!=0){
          high=a;
           break;
      }
    }
   cout<<high<<endl;
	}
return 0;
}

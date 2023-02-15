#include <iostream>
using namespace std;

int main() {
int test;
cin>>test;

while(test--){
    int size;
     cin>>size;
     int arr[size];
int count=0;
for(int i=0;i<size;i++){
    
    
   cin>>arr[i];
    if(arr[i]>=10&&arr[i]<=60){
        count++;

    
    }
    
    
}
cout<<count<<endl;

}


	return 0;
}

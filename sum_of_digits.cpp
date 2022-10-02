
#include <iostream>
using namespace std;

int main() 
{
    int tests;
    cin>>tests;
    
    while(tests--)
    {
        int number;
        cin>>number;
        
        int sum=0;
        
        while(number>0)
        {
            sum+=(number%10);
            number/=10;
        }
        
        cout<<sum<<"\n";
        
    }
	return 0;
}

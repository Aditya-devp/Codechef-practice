
#include <iostream>
using namespace std;


int main() {
	long long test;
	cin>>test;
	while(test--)
	{
		long long n,last,first;
		cin>>n;
		last=n%10;
		while(n>=10)
		{
			n=n/10;
		}
		first=n;
		cout<<last+first<<"\n";
		
	}
	return 0;
}

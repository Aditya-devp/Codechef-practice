#include <iostream>
using namespace std;

int main() {
	int n,a,b,just_rated,high_rating;
	cin>>n>>a>>b;
just_rated=n-a;
high_rating=just_rated-b;
cout<<just_rated<<" "<<high_rating;
	return 0;
}

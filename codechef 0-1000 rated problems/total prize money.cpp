Ques. In a coding contest, there are prizes for the top rankers. The prize scheme is as follows:

Top 1010 participants receive rupees XX each.
Participants with rank 1111 to 100100 (both inclusive) receive rupees YY each.
Find the total prize money over all the contestants.
  
  
  Code:-
  #include <iostream>
using namespace std;

int main() {
int test,money,pep;
cin>>test;
while(test--){
    cin>>money>>pep;
    cout<<(10*money)+(90*pep)<<endl;
}
	return 0;
}

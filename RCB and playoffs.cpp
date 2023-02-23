#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        int max_possible_points = X + Z*2;

        if(max_possible_points < Y) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int mile;
    while(cin >> mile){
        cout << fixed << setprecision(1) << (double)mile * 1.6 << endl;
    }
}
//done
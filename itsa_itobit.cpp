#include <iostream>
#include <bitset>
using namespace std;

int main(){
    int a;
    while(cin >> a){
        cout << bitset<8>(a) << endl;
    }
}
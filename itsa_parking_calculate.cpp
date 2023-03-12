#include <iostream>
using namespace std;

int main(){
    int stm_h=0,stm_m=0,ftm_h=0,ftm_m=0;
    cin >> stm_h >> stm_m;
    cin >> ftm_h >> ftm_m;
    int ttm = (ftm_h - stm_h)*60+(ftm_m - stm_m);
    ttm-=ttm%30;
    if(ttm <= 120){
        cout << 30 * (ttm/30) << endl;
    }else if(ttm <= 240){
        cout << (40 * ((ttm-120)/30)) + 120 << endl;//(30 * ((ttm-120)/30));
    }else{
        cout << (60 * ((ttm-240)/30)) + 160 + 120 << endl;//(40 * ((ttm-(ttm-240)-120)/30)) + (30 * ((ttm-(ttm-240)-120)/30));
    }
}
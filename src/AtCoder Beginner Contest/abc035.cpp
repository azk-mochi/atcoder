#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <complex>
#include <fstream>
#include <cmath>

using namespace std;

int main(void){
    int w, h; cin >> w >> h;
    /*if((w/4)*3 == h){
        cout << "4:3" << endl;
    }else{
        cout << "16:9" << endl;
    }*/
    if((w%16)==0 && (h%9)==0){
        cout << "16:9" << endl;
    }else{
        cout << "4:3" << endl;
    }
    return 0;
}

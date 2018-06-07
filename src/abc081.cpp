#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <complex>
#include <fstream>
#include <cmath>

using namespace std;

int main(void){
    string s; int count = 0;
    cin >> s;
    for(int i=0;i<3;i++){
        if(s.at(i)=='1'){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}

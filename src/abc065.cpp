#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <complex>
#include <fstream>
#include <cmath>

using namespace std;

int main(void){
    int x, a, b;
    cin >> x >> a >> b;
    if( 0 >= b - a){
        cout << "delicious" << endl;
    }else if(b - a <= x){
        cout << "safe" << endl;
    }else if(b-a > x){
        cout << "dangerous" << endl;
    }
    return 0;
}

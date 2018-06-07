#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <complex>
#include <fstream>
#include <cmath>

using namespace std;

int main(void){
    int a, b, c;
    cin >> a >> b >> c;
    if(a==b){
        cout << c << endl;
    }else if(a==c){
        cout << b << endl;
    }else if(b==c){
        cout << a << endl;
    }
    return 0;
}

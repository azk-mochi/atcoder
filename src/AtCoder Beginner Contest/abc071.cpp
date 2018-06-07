#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <complex>
#include <fstream>
#include <cmath>

using namespace std;

int abs2(int m, int n){
    if(m>n){
        return m-n;
    }else{
        return n-m;
    }
}

int main(void){
    int x, a, b;
    cin >> x >> a >> b;
    cout << ((abs2(a,x) > abs2(b,x)) ? "B" : "A") << endl;
    return 0;
}

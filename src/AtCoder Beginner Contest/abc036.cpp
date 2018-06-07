#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <complex>
#include <fstream>
#include <cmath>

using namespace std;

int main(void){
    int a, b; cin >> a >> b;
    if((b%a)==0){
        cout << b/a << endl;
    }else{
        cout << (b/a) +1 << endl;
    }
    return 0;
}

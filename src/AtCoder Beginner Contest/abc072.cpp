#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <complex>
#include <fstream>
#include <cmath>

using namespace std;

int main(void){
    int x, t;
    cin >> x >> t;
    cout << ((x-t>0) ? x-t : 0) << endl;
    return 0;
}

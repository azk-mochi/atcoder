#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <complex>
#include <fstream>
#include <cmath>

using namespace std;

int main(void){
    int n, a, b;
    cin >> n >> a >> b;
    cout << ((a*n >= b) ? b : a*n) << endl;
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <complex>
#include <fstream>
#include <cmath>

using namespace std;

int main(void){
    int a, b;
    cin >> a >> b;
    cout << (((a+b) % 3 == 0 || a%3==0 || b%3==0 ) ? "Possible" : "Impossible" ) << endl;
    return 0;
}

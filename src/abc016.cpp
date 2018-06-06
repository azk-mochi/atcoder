#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <complex>
#include <fstream>

using namespace std;

int main(void){
    int m, d;
    cin >> m >> d;
    cout << ((m%d==0) ? "YES" : "NO" ) << endl;
    return 0;
}

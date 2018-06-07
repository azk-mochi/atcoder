#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <complex>
#include <fstream>

using namespace std;

int A(void){
    int a, b;
    cin >> a >> b;
    cout << ((b - (a%b)==b) ? 0 : (b - (a%b) )) << endl;
    return 0;
}

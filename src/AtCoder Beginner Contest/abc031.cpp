#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <complex>
#include <fstream>

using namespace std;

int main(void){
    int a, d; cin >> a >> d;
    int agg = (a + 1) * d;
    int def = a * ( d + 1);
    cout << ((agg > def) ? agg : def) << endl;
    return 0;
}

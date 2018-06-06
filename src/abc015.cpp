#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <complex>
#include <fstream>

using namespace std;

int main(void){
    string s, t;
    cin >> s >> t;
    cout << ((s.length() > t.length()) ? s : t ) << endl;
    return 0;
}

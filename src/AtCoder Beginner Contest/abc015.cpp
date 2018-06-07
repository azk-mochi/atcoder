#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <complex>
#include <fstream>

using namespace std;

int A(void){
    string s, t;
    cin >> s >> t;
    cout << ((s.length() > t.length()) ? s : t ) << endl;
    return 0;
}

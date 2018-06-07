#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <complex>
#include <fstream>
#include <cmath>

using namespace std;

int main(void){
    string s;
    cin >> s;
    //どう置換すればよいのかわからないのであとで
    replace(s[3],s[3],"7","8");
    cout << s << endl;
    return 0;
}

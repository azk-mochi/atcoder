#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <complex>
#include <fstream>

using namespace std;

int main(void){
    int a, b, c, k;
    cin >> a >> b >> c >> k;
    int s, t;
    cin >> s >> t;
    
    if(s+t>k || s+t == k){
        a -= c;
        b -= c;
    }
    
    cout << s*a + t*b << endl;
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int main(void){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << min(min(a+c,b+d),min(a+d,b+c)) << endl;
    return 0;
}


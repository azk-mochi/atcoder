#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int main(void){
    int a, b;
    cin >> a >> b;
    vector<int> calc(3);
    calc[0] = a+b;
    calc[1] = a-b;
    calc[2] = a*b;
    sort(calc.begin(),calc.end());
    cout << calc[2] << endl;
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <complex>
#include <fstream>
#include <cmath>

using namespace std;

int main(void){
    int a, b; char op;
    cin >> a >> op >> b;
    if(op=='+'){
        cout << a+b << endl;
    }else{
        cout << a-b << endl;
    }
    return 0;
}

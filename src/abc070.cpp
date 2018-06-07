#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <complex>
#include <fstream>
#include <cmath>

using namespace std;

int main(void){
    string n; cin >> n;
    if(n.front() == n.back()){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}

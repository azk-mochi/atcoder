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
    
    if(n.at(0) == n.at(1) && n.at(1) == n.at(2) && n.at(2)== n.at(3)){
        cout << "SAME" << endl;
    }else{
        cout << "DIFFERENT" << endl;
    }
    
    return 0;
}

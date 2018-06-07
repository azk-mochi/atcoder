#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <complex>
#include <fstream>
#include <cmath>

using namespace std;

int main(void){
    int a, b; cin >> a >> b;
    
    if(a==1){
        a += 13;
    }
    if(b==1){
        b += 13;
    }
    
    if(a==b){
        cout << "Draw" << endl;
    }else if(a<b){
        cout << "Bob" << endl;
    }else{
        cout << "Alice" << endl;
    }
    
    return 0;
}

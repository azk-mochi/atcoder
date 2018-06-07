#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <complex>
#include <fstream>

using namespace std;

int main(void){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    double takahashi = (double)b / (double)a ;
    double aoki = (double)d / (double)c ;
    
    if(takahashi < aoki){
        cout << "AOKI" << endl;
    }
    if(takahashi == aoki){
        cout << "DRAW" << endl;
    }
    if(takahashi > aoki){
        cout << "TAKAHASHI" << endl;
    }
    return 0;
}

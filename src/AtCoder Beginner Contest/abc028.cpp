#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <complex>
#include <fstream>

using namespace std;

int main(void){
    int n; cin >> n;
    if(n<60){
        cout << "Bad" << endl;
    }
    if(60 <= n && n <= 89){
        cout << "Good" << endl;
    }
    if(90 <=n && n <= 99){
        cout << "Great" << endl;
    }
    if(n==100){
        cout << "Perfect" << endl;
    }
    return 0;
}

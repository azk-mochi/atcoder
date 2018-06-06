#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <complex>
#include <fstream>
#include <cmath>

using namespace std;

int main(void){
    int n, k, x, y;
    cin >> n >> k >> x >> y;
    int sum=0;
    for(int i=0;i<n;i++){
        if(i >= k){
            sum += y;
        }else{
            sum += x;
        }
    }
    cout << sum << endl;
    return 0;
}

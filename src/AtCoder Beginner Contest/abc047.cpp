#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <complex>
#include <fstream>
#include <cmath>

using namespace std;

int main(void){
    int num[3];
    cin >> num[0] >> num[1] >> num[2];
    //わからん
    for(int i=0;i<3;i++){
        if(num[0]+num[1]+num[2] % num[i] == 0 && num[i]==(num[0]+num[1]+num[2])/2){
            cout << "Yes" << endl;
            break;
        }
    }
    cout << "No" << endl;
    return 0;
}

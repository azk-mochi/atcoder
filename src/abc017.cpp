#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <complex>
#include <fstream>

using namespace std;

int A(void){
    int s[3]; int e[3];
    for(int i=0;i<3;i++){
        cin >> s[i] >> e[i];
    }
    int sum = 0;
    for(int i=0;i<3;i++){
        sum += (s[i] / 10 ) * e[i];
    }
    cout << sum << endl;
    return 0;
}

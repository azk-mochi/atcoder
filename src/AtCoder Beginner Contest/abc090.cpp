#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <complex>
#include <fstream>
#include <cmath>

using namespace std;

int main(void){
    char matrix[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> matrix[i][j];
        }
    }
    cout << matrix[0][0] << matrix[1][1] << matrix[2][2] << endl;
    return 0;
}

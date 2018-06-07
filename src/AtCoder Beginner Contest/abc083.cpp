#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <complex>
#include <fstream>
#include <cmath>

using namespace std;

int main(void){
    int a, b, c, d;
    cin >>a >> b>> c >> d;
    if((a+b)==(c+d)){
        cout << "Balanced" << endl;
    }
    if((a+b)>(c+d)){
        cout << "Left" << endl;
    }else if((a+b)<(c+d)){
        cout << "Right" << endl;
    }
    return 0;
}

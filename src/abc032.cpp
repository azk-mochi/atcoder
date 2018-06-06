#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <complex>
#include <fstream>

using namespace std;

int main(void){
    int a, b, n;
    cin >> a >> b >> n;
    //間違っている
    int i=0;
    for(int i=n;i<=20000;i++){
        if((i%a)==0 && (i%b)==0){
            cout << i << endl;
            break;
        }
    }
    cout << i << endl;
    return 0;
}

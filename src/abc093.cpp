#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <complex>
#include <fstream>
#include <cmath>

using namespace std;

int main(void){
    string s;
    cin >> s;
    int a=0; int b=0; int c=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'){
            a++;
        }
        if(s[i]=='b'){
            b++;
        }
        if(s[i]=='c'){
            c++;
        }
    }
    if(a==1 && b==1 && c==1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}

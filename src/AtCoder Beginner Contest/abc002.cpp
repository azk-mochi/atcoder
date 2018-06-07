
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int A(){
    int x, y; cin >> x >> y;
    cout << ((x > y) ? x : y) << endl; //3項演算子
    /* 次のように書いてもよい。
     if(x > y){
     cout << x << endl;
     }else{
     cout << y << endl;
     } */
}

int main(void){
    string W;
    cin >> W;
    
    for(int i=0;i<W.length();i++){
        if(!(W.at(i)=='a' ||W.at(i)=='e' ||W.at(i)=='i' ||W.at(i)=='o' ||W.at(i)=='u')){
            cout << W.at(i);
        }
    }
    
    cout << endl;
    return 0;
}

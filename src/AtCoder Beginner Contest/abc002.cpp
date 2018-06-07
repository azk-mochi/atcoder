
#include <iostream>

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

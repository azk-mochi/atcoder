//
//  abc.cpp
//  atcoder
//
//  Created by Koshikawa Kenichi on 2018/06/06.
//  Copyright © 2018年 reishoku. All rights reserved.
//

#include "abc.hpp"

using namespace std;

void abc001A(){
    int h1, h2; cin >> h1 >> h2;
    cout << h1 - h2 << endl;
}

void abc002A(){
    int x, y; cin >> x >> y;
    cout << ((x > y) ? x : y) << endl; //3項演算子
    /* 次のように書いてもよい。
     if(x > y){
        cout << x << endl;
     }else{
        cout << y << endl;
     } */
}

void abc003A(){
    int n; cin >> n;
    //式をまとめる。真ん中は等差数列の公式から。
    cout << (10000 * ((1/2)*n*(n+1))) / n << endl;
}

//
//  abc002.cpp
//  atcoder
//
//  Created by Koshikawa Kenichi on 2018/06/06.
//  Copyright © 2018年 reishoku. All rights reserved.
//

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

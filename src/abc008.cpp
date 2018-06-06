//
//  abc008.cpp
//  atcoder
//
//  Created by Koshikawa Kenichi on 2018/06/06.
//  Copyright © 2018年 reishoku. All rights reserved.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int A(){
    int s, t; cin >> s >> t;
    int count = 0;
    for(int i=s;i<=t;i++){
        count++;
    }
    cout << count << endl;
}


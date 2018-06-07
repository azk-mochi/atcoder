#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int A(){
    int n; cin >> n;
    //式をまとめる。真ん中は等差数列の公式から。
    cout << (10000 * ((n*(n+1))/2)) / n << endl;
}


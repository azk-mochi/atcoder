
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int A(){
    int n; cin >> n;
    cout << ((n % 10 == 3 || n%3 == 0) ? "YES" : "NO" ) << endl;
}

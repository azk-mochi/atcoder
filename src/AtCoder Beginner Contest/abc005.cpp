
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int A(){
    int x, y;
    cin >> x >> y;
    cout << ( y / x ) << endl;
}

int main(void){
    int n; cin >> n;
    vector<int> t(n);
    for(int i=0;i<n;i++){
        cin >> t[i];
    }
    sort(t.begin(), t.end());
    cout << t[0] << endl;
    return 0;
}

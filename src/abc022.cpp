#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <complex>
#include <fstream>

using namespace std;

int main(void){
    int n, s, t;
    cin >> n >> s >> t;
    int w;
    cin >> w;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
        a[i] += w;
    }
    int count = 0;
    for(int i=0;i<n;i++){
        if(s <= a[i] && a[i] <= t){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}

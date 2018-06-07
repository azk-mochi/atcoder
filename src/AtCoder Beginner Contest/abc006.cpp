
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

//Boost
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/vector.hpp>
#include <boost/numeric/ublas/io.hpp>

using namespace std;
namespace ublas = boost::numeric::ublas;
int A(){
    int n; cin >> n;
    cout << ((n % 10 == 3 || n%3 == 0) ? "YES" : "NO" ) << endl;
}

unsigned long long tribo(int n){
    //もうわけわからんのでパス。
    //ublas::identity_matrix i(3,3);
    ublas::matrix<int> t(3,3);
    t(0,0) = 1;
    t(0,1) = 1;
    t(1,0) = 1;
    t(1,1) = 1;
    t(2,0) = 1;
    t(0,2) = 1;
    t(2,2) = 0;
    t(1,2) = 0;
    t(2,1) = 0;
    ublas::vector<int> a(3);
    a(0)=1; a(1)=0; a(2)=0;
    
    for(int i=1;i<n;i++){
        t *= t;
    }
    a = prod(t,a);
    return a(0)+a(1)+a(2);
}

int main(void){
    int n; cin >> n;
    //cout << tribo(n)%10007 << endl;
    for(int i=0;i<9;i++){
        cout << tribo(i) << endl;
    }
}

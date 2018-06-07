#include <iostream>
using namespace std;

int distance(int m, int n){
    return abs(m-n);
}

bool can_make_triangle(int a, int b, int d){
    if(distance(a,b)<=d){
        return true;
    }else{
        return false;
    }
}

int main(void){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(can_make_triangle(a,c,d)){
        cout << "Yes" << endl;
        return 0;
    }else{
        if(can_make_triangle(a,b,d) && can_make_triangle(b,c,d)){ //間接
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }}
    return 0;
}

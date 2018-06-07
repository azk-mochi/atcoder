
#include <iostream>

using namespace std;

int A(){
    int h1, h2; cin >> h1 >> h2;
    cout << h1 - h2 << endl;
    return 0;
}

int main(void){
    int m;
    cin >> m;
    if(m<100){
        cout << "00" << endl;
    }else if(100<=m && m <=5000){
        //3桁me-toru
        if(m<1000){
            cout << "0" << (m/100) << endl;
        }else
        //4桁m
        /*if(1000<=m)*/{
            cout << (m/100) << endl;
        }
    }else if(6000<=m && m <= 30000){
        cout << (m/1000) + 50 << endl;
    }else if(35000<=m && m<=70000){
        cout << 80 + (((m/1000) - 30)/5) << endl;
    }else if(70000<m){
        cout << "89" << endl;
    }
}


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int A(){
    int n; cin >> n;
    cout << 2 * n << endl;
}

int main(void){
    //あっている気がするのにぜんぶWrong Answer. よくわからない。
    int arr[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin >> arr[i][j];
        }
    }
    int cparr[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cparr[i][j] =arr[3-i][3-j];
        }
    }
    //show
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(j==0){
                cout << cparr[i][j];
            }
            if(j==1 || j==2 || j==3){
                cout << " " << cparr[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}

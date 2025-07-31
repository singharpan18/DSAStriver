#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    if( x < 25){
        cout << "Your grade is: F";
    }else if(x >= 25 && x <= 44){
        cout << "Your grade is : E";
    }else if(x >= 45 && x <= 49){
        cout << "Your grade is : D";
    }else if(x >= 50 && x <= 59){
        cout << "Your grade is : C";
    }else if(x >= 60 && x <= 79){
        cout << "Your grade is : B";
    }else if(x >= 80 && x <= 100){
        cout << "Your grade is : A";
    }
    return 0;
}

//Step 1 Lec2 Build-up logical Thinking

/*patterns basically solved with the nested for loops or two for loops 
outer loops for focus on rows and inner loops for focus on columns & to connect somehow with rows
print them inside inner for loop
observe symeetric [optional]*/

/*
Example 1:
Input: N = 3
Output: 
* * *
* * *
* * *
*/

#include <iostream>
using namespace std;

void printPattern1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){
    int t = 1;
    int n;
    cin >> n;
    while(t){
        printPattern1(n);
        t--;
    }
    return 0;
}

/*
Input Format: N = 3
Result: 
* 
* * 
* * *
*/

#include <iostream>
using namespace std;

void printPattern2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){
    int t = 2;
    int n;
    cin >> n;
    while(t){
        printPattern2(n);
        t--;
    }
    return 0;
}

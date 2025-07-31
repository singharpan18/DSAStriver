/*Step 1 : Learn the basics
Lec 1: Things to Know in C++/Java/Python or any language
---------------------------------------------------------------------------------------------------------------------
User Input / Output
---------------------------------------------------------------------------------------------------------------------
#include<iostream> is used for input and output operations, 
while #include<math.h> allows us to use mathematical functions. 
Simply put, libraries provide pre-built functions and tools for us to use in our code.
*/

//The Generic Skeleton
#include<iostream>

int main() {
    // Your code here
    return 0;
}

//Output with cout
#include<iostream>
using namespace std;

int main() {
    cout << "Hey, Striver!" << endl;
    cout << "Hey, Striver!";
    return 0;
}

//input with cin
#include<iostream>
using namespace std;

int main() {
    int x;
    int y;
    cin >> x >> y;
    cout << "Value of x: " << x << "and y:" <<y;
    return 0;
}

//To make the process more convenient, there's a shortcut that allows you to include almost all standard libraries at once using #include<bits/stdc++.h>.

/*
---------------------------------------------------------------------------------------------------------------------
Data Types
int, float, double, long, long long
string & getline
char
---------------------------------------------------------------------------------------------------------------------
*/
//input/output string
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    cout << str;
}

//write a progam that takes an age and print adult or child
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    if(x < 18){
        cout << "adult";
    }else{
        cout << "child";
    }
}
/*
A school has following rules for grading system:
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A
Ask user to enter marks and print the corresponding grade
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;

    if (x < 0 || x > 100) {
        cout << "Invalid input!";
    } else if (x < 25) {
        cout << "Your grade is: F";
    } else if (x <= 44) {
        cout << "Your grade is: E";
    } else if (x <= 49) {
        cout << "Your grade is: D";
    } else if (x <= 59) {
        cout << "Your grade is: C";
    } else if (x <= 79) {
        cout << "Your grade is: B";
    } else { // 80 to 100
        cout << "Your grade is: A";
    }

    return 0;
}

//





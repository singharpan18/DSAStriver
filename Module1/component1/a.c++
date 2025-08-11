/*Step 1 : Learn the basics
Lec 1: Things to Know in C++/Java/Python or any language
---------------------------------------------------------------------------------------------------------------------
User Input / Output
---------------------------------------------------------------------------------------------------------------------
#include<iostream> is used for input and output operations, 
while #include<math.h> allows us to use mathematical functions. 
Simply, libraries provide pre-built functions and tools for us to use in our code.
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

/*---------------------------------------------------------------------------------------------------------------------
If else condition
---------------------------------------------------------------------------------------------------------------------*/

//write a progam that takes an age and print adult or child
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    if(x < 18){
        cout << "child";
    }else{
        cout << "adult";
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

//Switch Case Statements
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;

    switch(x){
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        default:
            cout << "Invalid";    
    }
    return 0;
}

//arrays & strings
#include<bits/stdc++.h>
using namespace std;

int main() {
    // 1D Array
    int oneD[5] = {10, 20, 30, 40, 50};
    cout << "1D Array:\n";
    for(int i = 0; i < 5; i++)
        cout << "Index " << i << ": " << oneD[i] << endl;

    // 2D Array
    int twoD[2][3] = {{1, 2, 3}, {4, 5, 6}};
    cout << "\n2D Array:\n";
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 3; j++)
            cout << "Element [" << i << "][" << j << "]: " << twoD[i][j] << endl;

    // String and Length
    string str = "Hello";
    cout << "String: " << str << endl;
    cout << "Length: " << str.length() << endl;
    cout << "Size: " << str.size() << endl;
    str[str.length()-1] = 'a';
    cout << "String: " << str << endl;

    return 0;
}
/*
both length() and size() functions do the same thing — they return the number of characters in the string.
✅ size() is more commonly used in containers (like vector, list, etc.).
✅ length() is sometimes used for clarity when working with strings.
*/

//for loop
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    return 0;
}

//while loop
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while (i <= 5) {
        cout << i << " ";
        i++;
    }
    return 0;
}

//do while loop
#include <iostream>
using namespace std;
int main() {
    int i = 1;
    do {
        cout << i << " ";
        i++;
    } while (i <= 5);
    return 0;
}

/*
Functions
Functions are set of code which performs something for you.
Functions are used to modularise code.
Functions are used to increase readability
Functions are used to use some code multiple time.
void -> which does not returns anything
return -> if a function has return data type then it must have return value in the body
parameterized
non-parameterized
*/
//void function
#include<iostream>
using namespace std;

void printName(){
    cout << "hey arpan";
}

int main(){
    printName();
    return 0;
}
//parameterized function
#include<iostream>
using namespace std;

void printName(string name){
    cout << "hey " << name;
}

int main(){
    string name;
    cin >> name;
    printName(name);
    return 0;
}

//return
#include<iostream>
using namespace std;
int maxx(int num1, int num2){
    if(num1 > num2) {
        return num1;
    }
    return num2;//if u don't write this in will return random value when if statement get false
}

int main(){
    int num1, num2;
    cin >> num1 >> num2;
    int maximum = maxx(num1, num2);
    cout << maximum;
    return 0;
}

//pass by value
#include<iostream>
using namespace std;

void doSomething(int num){
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 15;
    cout << num << endl;
}

int main(){
    int num = 10;
    doSomething(num);
    cout << num << endl;
    return 0;
}

//pass by reference

#include<iostream>
using namespace std;

void doSomethings(int &num){
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 15;
    cout << num << endl;
}

int main(){
    int num = 10;
    doSomethings(num);
    cout << num << endl;
    return 0;
}

//arrays is already pass by reference u dono't have to use '&'

/*
Big O notation
Represents the worst-case time complexity i.e. the upper bound.

Theta notation (θ)
Represents the average-case time complexity.

Omega notation (Ω)
Represents the best-case time complexity i.e. the lower bound.

*/


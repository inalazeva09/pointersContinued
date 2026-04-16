#include <iostream>
using namespace std;

// void change(int x) {
//     cout << &x << endl; 
//     x = 50;
// }

// int main(){
//     int num = 10; 
//     cout << &num << endl; 
//     change(num);
//     cout << num << endl;

// }


// void change(int* x) {
//     *x = 50;
// }

// int main(){
//     int num = 10; 
//     change(&num);
//     cout << "num = " << num << endl;

// }


void multiplyByTwo(int &num) {
    num *= 2; 
}

int main() {
    int userInput;

    cout << "Enter an integer: ";
    cin >> userInput;

    multiplyByTwo(userInput);

    cout << "The new value is: " << userInput << endl;
}

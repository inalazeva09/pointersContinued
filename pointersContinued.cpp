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


void addStuff(int& y) {
    y+= 3; 
}

int main() {
    int x = 5; 
    addStuff(x); 
    cout << "x = " << x << endl; 
}
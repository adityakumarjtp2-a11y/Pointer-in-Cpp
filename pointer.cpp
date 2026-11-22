#include <iostream>
using namespace std;

int main() {
    // What is a pointer? -----> data type which holds the address of other data type

    int a = 4;
    int* b = &a;
    // & ---> (Address of) operators
    cout <<"The address of a is " <<&a<< endl;
    cout <<"The address of a is " <<b<< endl;

    // * ---> (Dereference) operators
    cout <<"The value at adddress b is " <<*b<< endl;

    // Pointer to Pointer // pointer which holds the address of another pointer
    int** c = &b;
    cout <<"The address of b is " <<&b<< endl;
    cout <<"The address of b is " <<c<< endl;
    cout <<"The value at address c is " <<*c<< endl;
    cout <<"The value at address of value_at(value_at(c)) is " <<**c<< endl;

    return 0;
}
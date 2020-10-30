/*
 program that splits number in digits
*/

#include <iostream>
#include "splitter.hpp"
using namespace std;
int main(){
    int number, index;
    cout << "inserire numero" << endl;
    cin >> number;

    cout << "insert index : " << endl;

    cin >> index;
    cout<< splitter(number, index);
}
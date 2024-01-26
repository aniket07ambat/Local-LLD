#include<iostream>
using namespace std;

int main(){

    int age = 12;

    (age > 12) ? cout << "can vote" : cout << "can't vote";
    cout << endl;

    int x = 10;
    int y = 12;

    int result = (x > y) ? x : y; 

    cout << "larger number is " << result << endl;
    return 0;
}
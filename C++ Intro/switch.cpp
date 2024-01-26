#include<iostream>
using namespace std;

int main()
{
    char grade;
    cin >> grade;

    switch(grade){
        case 'A':
            cout << "Your marks will be in range of 90 to 100" << endl;
            break;

        case 'B':
            cout <<  "Your marks will be in range of 60 to 90" << endl;
            break;
        
        default:
            cout << "You failed" << endl;
    }

    return 0;
}
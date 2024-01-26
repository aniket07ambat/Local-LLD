// Pass by refrence.
// Multiple names given to same location

#include<iostream>
using namespace std;

int main(){
    int a = 9;
    int &temp = a;
    cout << temp << endl;
    temp++;
    cout << temp << endl;
    cout << a << endl;

    system("cls");
int b[] = {1, 2, 3, 4, 5};

// In this we have to specify the size of the array which is 5 in // this case
    int(&tem)[5] = b;
    cout << b[0] << endl;
    cout << tem[0] << endl;

//both the print statements prints 1
    return 0;
}




// Reference variable means same location but given differnt names.
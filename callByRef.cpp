#include <iostream>
using namespace std;

void swapByVal(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void swapByRef(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void swapByPointer(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int i = 3, j = 5;
    cout << "Original values: " << i << " " << j << endl;
    swapByVal(i,j);
    cout << "Swap By Value: " << i << " " << j << endl;
    i = 3; j = 5;
    swapByRef(i,j);
    cout << "Swap by Ref: " << i << " "  << j << endl;
    i = 3; j = 5;
    swapByPointer(&i, &j);
    cout << "Swap by pointer: " << i << " " << j << endl;
}
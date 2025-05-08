#include <iostream>
using namespace std;

int FactX (int n){
    if (n <= 1)
    {
        return 1;
    } else{
        return n * FactX(n-1);
    }
    
}

int main(){
    int num1;
    cout<< "Enter a number: ";
    cin >> num1 ;
    cout<< "The factorial of " << num1 << " is " << FactX(num1) << endl;
    return 0;
}
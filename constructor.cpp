#include <iostream>
using namespace std;

class Add{
    int x, y, z;

public:
    Add();
    Add(int x, int y);
    Add(const Add &);
    
    void getData(){  
        cout << "Enter two numbers: ";
        cin >> x >>y ;
    }

    void calculate(void);
    void display(void);
};

Add::Add(){ 
    x = 6;
    y = 5;
}


Add::Add(int i, int j){
    x = i;
    y = j;
}

Add::Add (const Add &p){
    x = p.x;
    y = p.y;
    cout << "Copy constructor called! Values:  " << x << " and " << y << endl;
}

void Add::calculate(){ 
    z = x + y;
}

void Add :: display(){
    cout <<"Sum: " << z << endl;
}

int main(){

    Add a;
    a.getData();  
    a.calculate();  
    a.display();

    Add b(5,6); //Dynamic initialisation
    b.getData();  
    b.calculate();  
    b.display();

    Add c(a);
    c.calculate();  
    c.display();

}
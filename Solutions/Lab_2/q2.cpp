#include <iostream>
using namespace std;
int main() {

    int a,b,*ptr_a,*ptr_b;
    
    cout << "Enter first Integer: "<<endl;
    cin >> a;
    
    cout << "Enter Second Integer: "<<endl;
    cin >> b;
    
  
    
    cout << "Value of a: "<<*ptr_a<<endl;
    cout << "Value of b: "<<*ptr_b<<endl;
    
    cout << "Address of a: "<<ptr_a<<endl;
    cout << "Address of b: "<<ptr_b<<endl;
    
    


    return 0;
}

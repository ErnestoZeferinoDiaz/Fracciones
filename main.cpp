#include <iostream>
using namespace std;
#include "lib/Fraccion.cpp"

int main(){
    Fraccion a(5,12);
    Fraccion b(0.75);
    
    
    cout<<"\n"<<a;
    cout<<"\n"<<b;
    cout<<"\n"<<a+b;
    cout<<"\n"<<a-b;
    cout<<"\n"<<a*b;
    cout<<"\n"<<a/b;
    return 0;
}
//call by value
#include <iostream>
using namespace std;
void num(int val){
    cout<<val<<endl;
    val +=5;
    
    cout<<val<<endl;
}


int main() {
    int val=20;
    num(val);
    cout<<val;

    return 0;
}
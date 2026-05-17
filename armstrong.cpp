#include <iostream>
using namespace std;
int main(){
    int n,lastdigit,rev=0;
    cout<<"Enter the number: ";
    cin>>n;
    int dupli=n;
    while(n>0){
        lastdigit=n%10;
        rev=rev+(lastdigit*lastdigit*lastdigit);
        n=n/10;
    }
    if(dupli==rev){
        cout<<"Its an Armstrong number";
    }
    else
        cout<<"Its not an Armstrong number";
   

    return 0;
}
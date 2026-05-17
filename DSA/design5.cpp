#include <iostream>
using namespace std;
void design(int n){

     int ini=8;
    for(int i=1;i<=n;i++){
       //star
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
       //space
        for(int j=0;j<ini;j++){
            cout<<" ";
        }

       //star
         for(int j=1;j<=i;j++){
            cout<<"*";
         }
        ini-=2;
        cout<<endl;
    }
     
}
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    design(n);
    return 0;
}
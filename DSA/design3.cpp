#include <iostream>
using namespace std;
void design(int n){
   
      for(int i=0;i<n;i++){
        for(char j='E'-i ;j<='E';j++){
            cout<<j;
        }
       
        cout<<endl;
    }
}

 int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    design(n);
    return 0 ;
}
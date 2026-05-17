#include <iostream>
using namespace std;
void square(int n){
    for(int i=0;i<n;i++){
        //star
        for(int j=0;j<n;j++){
            if(i==0 || i==n-1 || j==0 || j==n-1)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
}


int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    square(n);
    return 0;

}
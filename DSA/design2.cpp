#include <iostream>
using namespace std;

void design(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }

        //char
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for(int j=1;j<=2*i+1;j++){
            cout<<ch;
            if(j<=breakpoint)
                ch=ch+1;
            else
                ch=ch-1;
        }
        


        //space
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}




int main()
{
    int n;
    cout<< "Enter the number of rows: ";
    cin>>n;
    design(n);
    return 0;
}
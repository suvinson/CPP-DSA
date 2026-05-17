#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int count=0;
    for(int i=1;i<=num;i++)
    {
        count=count+i;
        if(count==num)
        {
            cout<<"Its a perfect number";
            break;
        }
    }
   if(count!=num){
    cout<<"Its not a perfect number";
   }
    return 0;
}
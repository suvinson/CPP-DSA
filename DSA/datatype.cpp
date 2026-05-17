#include <iostream>
using namespace std;

int main() {

      string s;
      getline(cin, s); // It reads a only first  line of input including spaces not the entire input
      cout<<s;
      
      int a; // integer datatype
      cin>>a;
      cout<<"Integer value is: "<<a<<endl;


      float b;
      cout<<"Enter float value: ";
      cin>>b; // float datatype
      cout<<"Float value is: " <<b<<endl;
      
      double d;
      cout<<"Enter double value: ";
      cin>>d; // double datatype 
      cout<<"double value is:" <<d<<endl;


      char c;
      cout<<"Enter a single character: ";
      cin>>c; //char datatype 
      cout<<c;

      long long l;
      cout<<"\n Enter long long value: ";
      cin>>l; //long long datatype 
      cout<<"long long value is: "<<l<<endl;

      
 


    return 0;
}
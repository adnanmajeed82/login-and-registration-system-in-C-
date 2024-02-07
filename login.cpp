#include<iostream>
using namespace std;
int main(){
    
    int id;//variable declaration  
    int password;
    
    id = 1; //variabel input set hard code 
    password=1456;
    
    cout<<"Enter your user name; "; //user prmompt ask enter your credentials
    cin>>id;
    cout<<"Enter your password: ";
    cin>>password;
    
    if(id==1 && password==1456){ //logical statement 
        cout<<"login successful";
    
    }
    else{
        cout<<"invalid user id and password ";
    }
    return 0;
}

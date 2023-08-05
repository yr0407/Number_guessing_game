/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<" enter the value of a "<< endl;
    cin>>a;
    cout<<" enter the value of b "<< endl;
    cin>>b;
    char op;
    cout<< " enter the oprator you want t perform"<< endl;
    cin>> op;
    
    switch(op){
        case '+': cout<< (a+b)<< endl;
             break;
        case '-':cout<< (a-b)<< endl;
             break;
        case '*':cout<< (a*b)<< endl;
             break;
        case '/':cout<< (a/b)<< endl;
             break;
       
        default: cout<< "please enter the valid oprator"<< endl;
    }
    
    

    return 0;
}

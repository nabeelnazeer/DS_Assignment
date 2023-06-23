#include<iostream>
using namespace std;

int factorial(int n){
    if (n == 0)          //base case
    return 1;
    else
    return n*factorial(n-1);     //recursive statement
}

int main()
{
    int n,choice;
    do
    {
        cout<<"enter the number to find factorial : "<<endl;
        cin>>n;
        cout<<"factorial of "<<n <<" is "<< factorial(n);
        cout<<endl;
        cout<<"press 1 if you want to contiue\npress any number to exit"<<endl;
        cin>>choice;


    } while (choice == 1 );
    return 0;
    
}

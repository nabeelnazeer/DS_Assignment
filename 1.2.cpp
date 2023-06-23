#include<iostream>
using namespace std;

int sumof(int n){
    if (n == 0)
    return 0;
    else
    return n + sumof(n-1);
}

int main()
{
    int n,choice;
    do
    {
        cout<<"enter the number to calculate sum upto: "<<endl;
        cin>>n;
        cout<<"sum of "<<n<<" numbers is "<<sumof(n)<<endl;
        cout<<"press 1 if you want to contiue\npress any number to exit"<<endl;
        cin>>choice;
    } while (choice == 1);
    
}

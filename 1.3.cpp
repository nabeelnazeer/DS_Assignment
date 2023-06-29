#include<iostream>
#include<string>

using namespace std;

string reversestring(const string&str, int index){

    if (index==-1){
        return "";

    }
    return str[index] + reversestring(str, index-1);
}
int main()
{
    string input;
    cout<<"enter the string to get it reversed : "<<endl;
    getline(cin, input);
    cout<<"reversed output : "<<reversestring(input, input.length()-1)<<endl;
    return 0;

}
/* enter the string to get it reversed : 
helloworld        
reversed output : dlrowolleh */
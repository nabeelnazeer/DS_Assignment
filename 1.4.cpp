#include<iostream>
#include<string>
using namespace std;

string ReverseOf(string word, int index)
{
    if (index == -1)
    {
        return "";
    }
    else
    return word[index] + ReverseOf(word, index-1);
}
bool CheckPalindrome(string word)
{
    if (word == ReverseOf(word, word.length() - 1))
    return true;
    else
    return false;
}

int main()
{
    string word;
    cout<<"enter the string to check if its a palindrome : "<<endl;
    getline(cin, word);
    cout<<"reversed = "<<ReverseOf(word, word.length())<<endl;
    if(CheckPalindrome(word)){
        cout<<" it is a palindrome "<<endl;
    }
    else{
        cout<<"it is not a palindrome"<<endl;
    }
    
    return 0;

}
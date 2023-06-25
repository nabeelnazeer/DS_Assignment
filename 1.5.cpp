#include<iostream>
#include<string>
using namespace std;

string BinaryOf(int n){
   if (n == 0)
	return "";

  string str = to_string(n%2);
  return str + BinaryOf(n/2);
}

int main()
{
   int n;
   int binary;
   cout<<"enter decimal to convert to its binary form : "<<endl;
   cin>>n;
   string number = BinaryOf(n);
   cout<<"Binary form : "<<number<<endl;
   return 0;
}

#include<iostream>
#include<string>
using namespace std;

string BinaryOf(int n){
   if (n/2 == 0)
	return "0";

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
   binary = stoi(number);
   cout<<"Binary form : "<<binary<<endl;
   return 0;
}

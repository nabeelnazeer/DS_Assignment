#include<iostream>
using namespace std;
 void ReadArr(char arr[], int size){
    cout<<"enter "<<size<<" elements"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
 }
 void PrintArr(char arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
 }


void countDuplicates(const char arr[], int size) {
    int charCount [256] = {0};

    for (int i = 0; i < size; i++) {
        charCount[arr[i]]++;
    }

    int duplicateCount = 0;
    for (int i =0;i<256;i++) {
        if (charCount[i] > 1) {
            duplicateCount++;
        }
    }

    std::cout << "Number of duplicates: " << duplicateCount << std::endl;
}
int main()
{
    int size;
    cout<<"enter the size of array : "<<endl;
    cin>>size;
    char* arr = new char[size];
    ReadArr(arr, size);
    PrintArr(arr, size);
    cout<<endl;
    countDuplicates(arr, size);
    return 0;

}
/* enter the size of array : 
7
enter 7 elements
a 
a
a
b
b
c
d
a a a b b c d Number of duplicates: 2 */
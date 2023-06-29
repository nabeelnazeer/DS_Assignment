#include<iostream>
using namespace std;

int SecondLarge (int arr[],int size){
    int largest = arr[0];
    int secondlargest = INT_MIN;
    for(int i = 1; i<size; i++){
        if (arr[i] > largest){
            secondlargest = largest;
            largest =  arr[i];
        }
        else if (arr[i]<largest && arr[i]> secondlargest){
            secondlargest = arr[i];
        }
    }
    return secondlargest;
}
void InsertionSort(int arr[], int size){
    int key;
    int j;
    for(int i=1;i<size;i++){
        key = arr[i];
        j = i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
            
        }
        arr[j+1] = key;
        

    }
}
int get_element(int arr[],int index){
    return arr[index];
}
void print_arr(int arr[], int size){

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int size;
    cout<<"enter the size of the array : "<<endl;
    cin>>size;
    int* arr = new int [size];
    cout<<"enter "<<size<<" elements : "<<endl;
    for (int i = 0;i<size; i++){
        cin>>arr[i];
    }
    int secondlarge = SecondLarge(arr, size);
    cout<<"the second largest element of the array is : "<<secondlarge<<endl;

    InsertionSort(arr,size);
    cout<<"sorted array : ";
    print_arr(arr, size);
    int k;
    cout<<"\nenter the value of k to get kth largest element : "<<endl;
    cin>>k;
    cout<<" the "<<k<<"th "<<"largest element is "<<get_element(arr,size - k);
    delete[] arr;
    return 0;
    
}
/* enter the size of the array : 
6
enter 6 elements : 
12
34
56
20
12
34
the second largest element of the array is : 34
sorted array : 12 12 20 34 34 56 
enter the value of k to get kth largest element : 
3
 the 3th largest element is 34  */

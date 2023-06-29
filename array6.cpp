#include<iostream>
#include<stdexcept>

using namespace std;

int* read_arr(int arr[],int size)
{

    cout<<"enter "<<size<<" elements\n";
    for(int i=0; i<size; i++ ){
        cin>>arr[i];
    }
    return arr;
}

void print_arr(int arr[], int size){

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int search_arr(int arr[], int size,int elem){
    for(int i=0; i<size; i++){
        if (arr[i] == elem)
        {
            return i;
        }

    }
    return -1;
}
int get_max(int arr[], int size){
    int max = arr[0];
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int get_min(int arr[], int size){
    int min = arr[0];
    for(int i=0; i<size; i++)
    {
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
void display_menu(){
    cout << "\nMenu:\n";
    cout << "1. Read array\n";
    cout << "2. Print array\n";
    cout << "3. Search element\n";
    cout << "4. Get maximum element\n";
    cout << "5. Get minimum element\n";
    cout<<"6. delete array\n";
    cout << "7. Exit\n";
    cout << "Enter your choice: ";
}

int main()
{
    int size;
    int* arr;
    bool exitmenu = false;

    while (!exitmenu)
    {
        display_menu();
        int choice;
        cin>>choice;

        switch (choice)
        {
        case 1:
    
        cout<<"enter the size of array"<<endl;
        cin>>size;
        arr = new int[size];
        read_arr(arr, size);
        break;
        case 2:
        print_arr(arr, size);
        break;
        case 3:
        int elem;
        cout<<"enter the element to search array : "<<endl;
        cin>>elem;
        if(search_arr(arr, size, elem) == -1){
            cout<<"requested element not found"<<endl;
        }
        else{
            cout<<"element found at "<<search_arr(arr, size, elem)<<" index"<<endl;
        }
        break;
        case 4:
        cout<<"the gretest integer is : "<<get_max(arr, size)<<endl;
        break;
        case 5:
        cout<<"the smallest integer is : "<<get_min(arr, size)<<endl;
        break;
        case 6:
        delete[] arr;
        break;
        case 7:
        exitmenu = true;
        break;


        default:
        cout<<"invalid input"<<endl;
            break;
        }
    }
    cout<<"thank you"<<endl;
    return 0;
    

}
/* Menu:
1. Read array
2. Print array
3. Search element
4. Get maximum element
5. Get minimum element
6. delete array
7. Exit
Enter your choice: 1
enter the size of array
5
enter 5 elements
12
34
56
78
89

Menu:
1. Read array
2. Print array
3. Search element
4. Get maximum element
5. Get minimum element
6. delete array
7. Exit
Enter your choice: 2
12 34 56 78 89 
Menu:
1. Read array
2. Print array
3. Search element
4. Get maximum element
5. Get minimum element
6. delete array
7. Exit
Enter your choice: 3
enter the element to search array : 
12
element found at 0 index

Menu:
1. Read array
2. Print array
3. Search element
4. Get maximum element
5. Get minimum element
6. delete array
7. Exit
Enter your choice: 4
the gretest integer is : 89

Menu:
1. Read array
2. Print array
3. Search element
4. Get maximum element
5. Get minimum element
6. delete array
7. Exit
Enter your choice: 5
the smallest integer is : 12

Menu:
1. Read array
2. Print array
3. Search element
4. Get maximum element
5. Get minimum element
6. delete array
7. Exit
Enter your choice: 7
thank you */
#include <iostream>

using namespace std;
void print_array(int array[], int size);
void bubble_sort(int array[], int size);
void scanarray(int array[], int size);
void swap(int array[], int index1, int index2);
int main()
{
    int array_size;
    cout << "Please Enter the size of your array: ";
    cin >> array_size;
    int array_1[array_size];
    scanarray(array_1,array_size);
    bubble_sort(array_1,array_size);
    print_array(array_1,array_size);
    return 0;
}
void bubble_sort(int array[], int size){
    for(int i = 0 ; i < size - 1 ; i++)
    {
        for(int j = 1 ; j < (size - i)-1 ; j++)
        {
            if(array[j] < array[j-1])
                swap(array, j, j-1);
        }
        print_array(array,size);
    }
}
void print_array(int array[], int size){

 cout<< "**" << endl<< "sorting: " << endl;
 for (int z=0; z<size;z++)
 cout << array[z] << endl;
 cout << endl;
 }
void scanarray(int array[], int size){
    for(int p = 0 ; p < size ; p++)
    {
        cout<<"Please Enter the " << p+1 << " number: ";
        cin >> array[p];
    }
}
void swap(int array[], int index1, int index2)
{
    int tempvar = 0;
    tempvar = array[index1];
    array[index1] = array[index2];
    array[index2] = tempvar;
}

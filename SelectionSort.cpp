#include <iostream>

using namespace std;
void print_array(int array[], int size);
void selection_sort(int array[], int size);
void scanarray(int array[], int size);
void swap(int array[], int index1, int index2);
int main()
{
    int array_size;
    cout << "Please Enter the size of your array: ";
    cin >> array_size;
    int array_1[array_size];
    scanarray(array_1,array_size);
    selection_sort(array_1,array_size);
    print_array(array_1,array_size);
    return 0;
}
void selection_sort(int array[], int size){
    for(int i = 0 ; i < size-1 ; i++)
    {
        int min = i;
        for(int j = i+1; j < size ; j++) /*Check minimum*/
        {
            if(array[min] > array[j])
                min = j;
        }
        if(min!=i)
            swap(array,min,i);
            print_array(array,size);
    }
}
void print_array(int array[], int size){

 cout<< "**" << endl<< "sorting: " << endl;
 int j;
 for (j=0; j<size;j++)
 cout << array[j] << endl;
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
    int temp = 0;
    temp = array[index1];
    array[index1] = array[index2];
    array[index2] = temp;
}

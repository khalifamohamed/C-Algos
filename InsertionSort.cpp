/*Insertion Sort Algorithm*/
/*Author: Mohamed Khalifa*/
/*Date: 8/8/2016, Time: 9:55 Pm*/
#include <iostream>
using namespace std;
void print_array(int array[], int size);
void insertion_sort(int array[], int size);
void scanarray(int array[], int size);
int main()
{
    int array_size;
    cout << "Please Enter the size of your array: ";
    cin >> array_size;
    int array_1[array_size];
    scanarray(array_1,array_size);
    insertion_sort(array_1,array_size);
    print_array(array_1,array_size);
    return 0;
}
void insertion_sort(int array[], int size){
    int tmp;
    for(int i = 0 ; i < size ; i++)
    {
        int j=i;
        while(j>0 && array[j-1]>array[j])
        {
            tmp = array[j];
            array[j] = array[j-1];
            array[j-1] = tmp;
            j--;
        }
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

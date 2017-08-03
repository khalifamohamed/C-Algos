#include <iostream>

using namespace std;
void scanarray(int array[],int size);
int ssearch(int array[], int index, int key);
int main()
{
    int array_size;
    cout << "Please Enter the size of your array: ";
    cin >> array_size;
    int array_1[array_size];
    scanarray(array_1,array_size);
    int x = ssearch(array_1,array_size,5);
    cout << x;
    return 0;
}
void scanarray(int array[], int size){
    for(int p = 0 ; p < size ; p++)
    {
        cout<<"Please Enter the " << p+1 << " number: ";
        cin >> array[p];
    }
}
int ssearch(int array[], int index,int key)
{
    int x;
    if(x>=0)
    {
    if(array[index] == key)
        return key;
    else ssearch(array, (index - 1) , key);
    }
    return 0;
}

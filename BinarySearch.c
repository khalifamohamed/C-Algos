#include <stdio.h>
#include <stdlib.h>
void searchbinary(int* array, int size, int key);
int main()
{
    int noe,key;
    scanf("%d", &noe);
    int a[noe];
    for(int i = 0; i<noe ; i++)
    {
     scanf("%d", &a[i]);
    }
    scanf("%d", &key);
    searchbinary(a,noe,key);
    return 0;
}
void searchbinary(int* array, int size, int key)
{
    int high = size - 1, low = 0, middle = (high+low)/2;
    while(low <= high)
    {
        if(array[middle] < key)
            low = middle + 1;
        else if(array[middle] == key)
        {
            printf("Element found at index %d", middle);
            break;
        }
        else if(array[middle] > key)
            high = middle - 1;
        middle = (high+low)/2;
    }
    if(low > high)
        printf("Element not found");
}

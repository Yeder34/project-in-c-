#include <iostream>
using namespace std;
 
int main()
{
    int arr[5];
    int  i, j, temp;
 
    // Reading the size of the array
    //cout<<"Enter size of array: ";
  //  cin>>size;
 
    //Reading elements of array
    cout<<"Enter elements in array: ";
    for(i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    //Sorting an array in ascending order
    for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            //If there is a smaller element found on right of the array then swap it.
            if(arr[j] < arr[i])
            {
               temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    //Printing the sorted array in ascending order
    cout<<"\nElements of array in sorted ascending order:"<<endl;
    for(i=0; i<5; i++)
    {
        cout<<arr[i]<<endl;
    }
 
    return 0;
}

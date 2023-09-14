#include<iostream>
void delete_ele(int arr[],int &size,int num)
{
   int foundIndex;

    // Find the index of the number to be deleted
    for (int i = 0; i < size; ++i) {
        if (arr[i] == num) {
            foundIndex = i;
            break;
        }
    }

    // Shift elements to the left to fill the gap
    for (int i = foundIndex; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }

    // Decrease the size of the array
    --size;
}
int main()
{ int size;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int num;
    std::cin>>num;
    delete_ele(arr,size,num);
    for(int i=0;i<10;i++)
    {
        std::cout<<arr[i]<<std::endl;
    }
    return 0;
}
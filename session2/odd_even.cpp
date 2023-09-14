#include<iostream>
void odd_even(int arr[],int even[],int odd[],int size);
void odd_even(int arr[],int even[],int odd[],int size)
{
    int even_num=0;
    int odd_num=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            even[even_num]=arr[i];
            even_num++;
        }
        else
        {
            odd[odd_num]=arr[i];
            odd_num++;
        }

    }

    // print array that contain even number
    std::cout<<"even= \n";
    for(int i=0;i<even_num;i++)
    {
        std::cout<<even[i]<<std::endl;
    }
    // print array that contain odd number
    std::cout<<"odd= \n";
    for(int i=0;i<odd_num;i++)
    {
        std::cout<<odd[i]<<std::endl;    
    }
}
int main()
{int evenarr[100];
    int oddarr[100];
    int arr[]={66,1,2,8,9,6,7,14,25,67,100};
    odd_even(arr,evenarr,oddarr,sizeof(arr)/sizeof(int));
    
    return 0;
}
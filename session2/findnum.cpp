#include <iostream>
#include<string>
void findnum(int arr[],int num,int size);
void findnum(int arr[],int num,int size)
{
	
	for (int i = 0; i < size; i++)
	{
		if(arr[i]==num)
        {
            std::cout<<" the number is found in array= "<<num<<"\n";
        }
	}
}

int main()
{int num;
    std::cout<<" enter number for search \n";
    std::cin>>num;
int arr[] = {8,6,55,4,5,8,2,1};
	findnum(arr, num,sizeof(arr)/sizeof(int));

    return 0;
}

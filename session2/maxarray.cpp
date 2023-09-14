#include <iostream>
#include<string>
int maxnum(int arr[],int size);
int maxnum(int arr[],int size)
{
	int max = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
        max = arr[i];
	}
return max;
}

int main()
{
int arr[] = {8,6,55,4,5,8,2,1};
	std::cout<<maxnum(arr, sizeof(arr)/sizeof(int));

    return 0;
}

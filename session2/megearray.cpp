#include<iostream>
void mergearray (int arr1[],int arr2[],int mergedarr[],int size1,int size2);
void mergearray (int arr1[],int arr2[],int mergedarr[],int size1,int size2)
{
    for(int i=0;i<size1;i++)
    {
        mergedarr[i]=arr1[i];
    }
    for(int i=size1;i<size2+size1;i++)
    {
        mergedarr[i]=arr2[i-size1];
    }
}
int main() {
    int arr1[] = {8, 5, 9, 4, 16,100};
    int size1 = sizeof(arr1) / sizeof(int);

    int arr2[] = {22, 7, 33, 4, 29};
    int size2 = sizeof(arr2) / sizeof(int);
     int mergedarr[size1+size2];
    mergearray(arr1,arr2,mergedarr,size1,size2);
    for(int i=0;i<size1+size2;i++)
    {
        std::cout<<mergedarr[i]<<std::endl;
    }
    return 0;
}
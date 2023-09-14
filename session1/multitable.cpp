#include <iostream>
int main()
{int num;
std::cout<<"please enter Number for multplication table\n";
std::cin>>num;
for(int i=0 ;i<=10;i++)
{

   printf("%d*%d=%d\n",num,i,num*i);
}

    return 0;
}
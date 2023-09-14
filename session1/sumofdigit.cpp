#include <iostream>
int main()
{
int num;
int sum=0;
std::cout<<"Plrease Enter a integar value\n";

std::cin>>num;

while(num>0)
{
int digit = num % 10;
sum += digit;
num /= 10;
}
std::cout<<"The sum of digits = "<<sum<<std::endl;



    return 0;
}
#include <iostream>
#include <bitset>
int main()
{int num;
int num2;
std::cout<<"Enter number to covert into decimal\n";
std::cin>>num;
std::bitset<16> binaryset(num);
std::cout<<"the binary representation "<<binaryset<<std::endl;

return 0;
}
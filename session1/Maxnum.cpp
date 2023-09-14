#include <iostream>
int main()
{ int x,y,z;
std::cout<<"please enter the three value x,y and z\n";
std::cin>>x>>y>>z;

if((x>y)&&(x>z))
{
std::cout<<"The maximim number is x="<<x;
}
 else if((y>x)&&(y>z))
{
std::cout<<"The maximim number is y= "<<y;
}
else if((z>x)&&(z>y))
{
std::cout<<"The maximim number is z="<<z;
}
   return 0; 
}
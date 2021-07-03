

#include <iostream>

int add(int a ,int b)
{
	return a+b;
}
int mul(int a ,int b)
{
	return a*b;
}

int div(int a ,int b)
{
	return a/b;
}

void branch1()
{
	std::cout<<"Branch1";
}
void branch2()
{
	std::cout<<"Branch2";
}
int main()
{
	int a,b;
	std::cin>>a>>b;

	std::cout<<add(a,b)<<"\n":
	std::cout<<mul(a,b)<<"\n":
}

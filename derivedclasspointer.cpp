#include <iostream>

using namespace std;
class Base
{
	int x;
	public:
	Base()
{
	cout<<"base default constructor"<<endl;
}
	void showBase()
{
	cout<<"Base...\n";
}

};

class Derived:public Base
{

	int y;
	public:
	Derived()
{
	cout<<"derived default constructor"<<endl;
}

	Derived(int i)
{
	cout<<"derived parameter constructor"<<endl;
}

	void showderived()
{
	cout<<"derivedd...\n";
}

};

int main()
{
	Base *ptr;
	Base b;
	Derived d1;
	ptr=&b;
	ptr=&d1;
return 0;

}
    

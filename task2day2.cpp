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
	void showbase()
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
	void showderived()
{
	cout<<"derived...\n";
}

};

int main()
{
	//Base *ptr;
	Derived d1;
	Derived *ptr;
	Base b;
	//ptr=&b;
	ptr=&d1;
	ptr->showderived();
	ptr->showbase();
return 0;

}

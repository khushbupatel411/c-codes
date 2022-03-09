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
};

int main()
{
	Base b;
	Derived d1;
	Derived d2(10);
return 0;

}
    

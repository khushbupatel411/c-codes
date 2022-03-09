#include <iostream>

using namespace std;
class Base
{
	int x;
	public:
	Base()
{
	cout<<"base default constructor";
}

	~Base()
{
	cout<<"base default destructor";
}

};

class Derived:public Base
{

	int y;
	public:
	Derived()
{
	cout<<"derived default constructor";
}

	~Derived(int i)
{
	cout<<"derived parameter destructor";
}
};

int main()
{
	Base b;
	Derived d1;
	Derived d2(10);
return 0;

}
    

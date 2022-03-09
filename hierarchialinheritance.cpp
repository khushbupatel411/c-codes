// Hierarchical Inheritance
#include<iostream>
using namespace std;

// base class
class Vehicle
{
public:
	Vehicle()
	{
	cout << "This is a Vehicle\n";
	}
};


// first sub class
class Car: public Vehicle
{
	public:
	Car()
{
	cout<<"car....first sub class"<<endl;
}
};

// second sub class
class Bus: public Vehicle
{
	public:
	Bus()
{
cout<<"bus....second sub class"<<endl;
}
	
};

int main()
{
	
	Car obj1;
	Bus obj2;
	return 0;
}



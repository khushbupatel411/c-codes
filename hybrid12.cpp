//C++ program for Hybrid Inheritance

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

//base class
class Fare
{
	public:
	Fare()
	{
		cout << "Fare of Vehicle\n";
	}
};

// first sub class
class Car : public Vehicle
{
	public:
	Car()
{
	cout<<"inherited from vehicle..."<<endl;
}
};

// second sub class
class Bus : public Vehicle, public Fare
{
	public:
	Bus()
{
cout<<"inherited from vehicle and fare.."<<endl;


}
};

int main()
{
	
	Bus obj2;
	return 0;
}

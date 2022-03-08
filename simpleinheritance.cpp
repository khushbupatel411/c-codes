#include <iostream>
using namespace std;


class Parent
{
public:
	int id1;
};


class Child : public Parent
{
public:
	int id2;
};


int main()
{
	Child obj1;
		
	obj1.id1 = 7;
	obj1.id2 = 91;
	cout << "Child id is: " << obj1.id1<< '\n';
	cout << "Parent id is: " << obj1.id2 << '\n';
		
	return 0;
}

#include<iostream>
using namespace std;
class A  
{ 
public: 
    int x{10000}; 
protected: 
    int y{20000}; 
private: 
    int z{30000}; 
}; 
  
class B : protected A 
{ 
	public:
	B()
{
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	//cout<<"z = "<<z<<endl;
}
    // x is public 
    // y is protected 
    // z is not accessible from B 
};
 
class c : public B 
{ 
	public:
	c()
{
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	//cout<<"z = "<<z<<endl;
}
    // x is public 
    // y is protected 
    // z is not accessible from B 
};
 /* 
class C : protected A 
{ 
    // x is protected 
    // y is protected 
    // z is not accessible from C 
}; 
  
class D : private A    // 'private' is default for classes 
{ 
    // x is private 
    // y is private 
    // z is not accessible from D 
}; 
*/
int main()
{
    B b;
	c c1;
    return 0;
}

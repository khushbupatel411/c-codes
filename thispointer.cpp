#include <iostream>

using namespace std;
class sample
{

	int a ,b;
	public:
	void input(int a,int b)
{
	this->a=a+b;
	this->b=a-b;
}

	void output()
{
	cout<<"a = "<<a;
	cout<<"b = "<<b;

}
};
int main()
{
	sample ob;
	int a=5,b=8;
	ob.input(a,b);
	ob.output();
	return 0;
}

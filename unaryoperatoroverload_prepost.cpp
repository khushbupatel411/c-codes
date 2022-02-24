#include<iostream>
using namespace std;
class space
{
	int x,y,z;
	public:
	space()
	{
		x=y=z=0;
	}
	
	space(int a,int b,int c)
	{
		x=a;y=b;z=c;
	}
	void display()
	{
	cout<<"\nx="<<x<<" ,y="<<y<<" ,z="<<z;
	}
	void operator--();
	void operator++();
	
};

	void space::operator--()
{
	--x;
	--y;
	--z;
}

	void space::operator++()
{
	++x;
	++y;
	++z;
}
	

	int main()
{
	space s1(5,4,3);
	s1.display();
	--s1;
	cout<<"\npre decrement is==";
	s1.display();

	++s1;
	cout<<"\npre increment is==";
	s1.display();

	return 0;


}

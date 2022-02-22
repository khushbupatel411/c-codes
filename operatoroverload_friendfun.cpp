#include<iostream>
using namespace std;
class complex
{
	public:
	int real,img;
	
	complex()
{
	real=0;
	img=0;
}
	complex(int x,int y)
{
	real=x;
	img=y;

}
	void display()
	{
		cout<<"real part is=="<<real<<"img part is=="<<img<<endl;
	}
	friend complex operator + (complex ob1,complex ob2);
	friend complex operator - (complex ob1,complex ob2);
	friend complex operator * (complex ob1,complex ob2);
	friend complex operator / (complex ob1,complex ob2);
	
};

complex operator +(complex ob1,complex ob2)
	{
		complex addition;
		addition.real=ob1.real+ob2.real;
		addition.img=ob1.img+ob2.img;
		return addition;	
	}
complex operator -(complex ob1,complex ob2)
	{
		complex subtract;
		subtract.real=ob1.real-ob2.real;
		subtract.img=ob1.img-ob2.img;
		return subtract;	
	}
complex operator *(complex ob1,complex ob2)
	{
		complex mul;
		mul.real=ob1.real*ob2.real;
		mul.img=ob1.img*ob2.img;
		return mul;	
	}
complex operator /(complex ob1,complex ob2)
	{
		complex div;
		div.real=ob1.real/ob2.real;
		div.img=ob1.img/ob2.img;
		return div;	
	}

int main()
{
	complex c1(2,2),c2(1,1),c3;
	
	c1.display();
	
	c2.display();
	c3=c1+c2;
	c3.display();
	c3=c1-c2;
	c3.display();
	c3=c1*c2;
	c3.display();
	c3=c1/c2;
	c3.display();

	
	return 0;
}
	

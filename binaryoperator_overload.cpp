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
		cout<<"real part is=="<<real<<"  img part is=="<<img<<endl;
	}
	complex operator +(complex ob)
	{
		complex addition;
		addition.real=real+ob.real;
		addition.img=img+ob.img;
		return addition;	
	}
	complex operator -(complex ob)
	{
		complex subtract;
		subtract.real=real-ob.real;
		subtract.img=img-ob.img;
		return subtract;	
	}
	complex operator *(complex ob)
	{
		complex mul;
		mul.real=real*ob.real;
		mul.img=img*ob.img;
		return mul;	
	}
	complex operator /(complex ob)
	{
		complex div;
		div.real=real/ob.real;
		div.img=img/ob.img;
		return div;	
	}

};
int main()
{
	complex c1(10,5),c2(5,1),c3;
	
	c1.display();
	c2.display();
	c3=c1.operator +(c2);
	c3.display();
	c3=c1.operator -(c2);
	c3.display();
	c3=c1.operator *(c2);
	c3.display();
	c3=c1.operator /(c2);
	c3.display();
	return 0;
}
	

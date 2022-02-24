#include<iostream>
using namespace std;
class unary
{
	public:
	int x,y,z;
	
	unary()
{
	x=y=z=0;
}
	unary(int a,int b,int c)
{
	x=a;y=b;z=c;

}
	void display()
	{	
		
		cout<<"x is=="<<x<<"  y is=="<<y<<" z is=="<<z<<endl;
	}
	
	friend unary operator ++(unary ob);
};

unary operator ++(unary ob)
	{
		unary temp;
		cout<<"\npre incre==="<<endl;
		temp.x=++ob.x;
		temp.y=++ob.y;
		temp.z=++ob.z;
		return temp;	
	}

int main()
{
	unary u1(5,4,3),u2;
	u1.display();
	
	u2=++u1;
	u2.display();


return 0;
}


	

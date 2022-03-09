#include <iostream>

using namespace std;
class person{
    
    public:

    int a1;
    void fun()
    {
        cout<<"public";
    }
    
};

class girl:public person
{
    
    public:
    int b1;
    void fun()
    {
        cout<<"girlsss";
    }
    
    
};

class boy:public girl
{
    
    public:
    int c1;
    void fun()
    {
        cout<<"boysss";
    }
    
    
};

int main()
{
    
    boy ob1;
   ob1.fun();
	cout<<endl;
	ob1.girl::fun();
cout<<endl;
	ob1.person::fun();
    return 0;
}

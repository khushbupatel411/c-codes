#include<iostream>
using namespace std;


class student {
public:
	int rollno;
	char name[10];

	
	int total;
	float percentage;
};

class test{
public:
	int marks[5];


};

// sub class derived from two base classes
class result : public student, public test 
{
	public:
	
	int total;
	float percentage;
	//void disp()
//{
	//cout<<"total is=="<<total<<endl;
	//cout<<"percentage is=="<<percentage;
//}	
	


};

// main function
int main()
{
	result r1;
	int i;
	for(i=0;i<5;i++)
{
	cout<<"ent the marks:="<<endl;
	cin>>r1.marks[i];

}
	r1.total=0;
	for(i=0;i<5;i++)
{
	r1.total+=r1.marks[i];

}
	
	cout<<"total is = "<<r1.total<<endl;
	r1.percentage=r1.total/5;
	cout<<"percentage is = "<<r1.percentage;
	

	return 0;
}

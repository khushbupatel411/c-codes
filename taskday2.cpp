#include <iostream>

using namespace std;
class student
{
	int marks[3];
	char name[10];
	
	public:
	
	int rollno;
	void getdata()
{

	for(int i=0;i<3;i++)
{
	cout<<"enter the marks\n";
	cin>>marks[i];
}

	cout<<"enter name:=\n";
	cin>>name;
	
	cout<<"enter roll no:=\n";
	cin>>rollno;
}
	void printdata()
{
	
	for(int i=0;i<3;i++)
{
	cout<<marks[i]<<endl;
}

	cout<<"name is :="<<name<<endl;
	
	cout<<"roll no is:="<<rollno<<endl;
}	
};

int main()
{
	
	student s[3];
	student *ptr=s;
	for(int i=0;i<3;i++)
{
	ptr->getdata();
	ptr->printdata();
	ptr++;

}
return 0;

}
    

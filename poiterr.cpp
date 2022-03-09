#include<iostream>
using namespace std;
int main()
{
	int *ptr1, *ptr2 , *sum ;
	//i=1000;
	//sum = &i; 
	ptr1= new int;
	ptr1= new int;
	sum= new int;
	cout<<"ent the value:--";
	cin>>*ptr1;
	cout<<"ent the value:--";
	cin>>*ptr2;
	*sum=*ptr1+*ptr2;
	cout<<"add of int variable :="<<*sum<<endl;
	delete ptr1;
	delete ptr2;
	delete sum;
return 0;

}

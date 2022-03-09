#include<iostream>
using namespace std;
int main()
{
	int *pt = new int;
	*pt = 55;
	cout<<"value :"<<*pt<<endl;
	cout<<"add of variable :="<<pt<<endl;
	cout<<"size of variable :="<<sizeof(*pt)<<endl;
	cout<<"size of pointer :="<<sizeof(pt)<<endl;
	cout<<"add of int variable :="<<&pt<<endl;
return 0;

}

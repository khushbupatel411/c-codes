#include<iostream>
using namespace std;
class fun
{
	public:
	int sum(int i,int j,int k)
	{
	return (i+j+k);
	}
	
	char sum(char a)
	{
		return a;
		
	}

};

int main()
{
	fun f;
	int i,j,k;
	cout<<"ent i==="<<endl;
	cin>>i;
	cout<<"ent j==="<<endl;
	cin>>j;
	cout<<"ent k==="<<endl;
	cin>>k;
	char a;
	cout<<"ent character:="<<endl;
	cin>>a;
	cout<<"sum is :"<<f.sum(i,j,k)<<endl;
	cout<<"char is :"<<f.sum(a)<<endl;
	
	return 0;

}

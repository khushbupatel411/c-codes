#include<iostream>
using namespace std;
int sum(int i,int j,int k)
{
	return (i+j+k);
}
int sum(int i,int j)
{
	return(i+j);
}
int main()
{
//cout<<"sum is 5:"<<sum(5,5,5,5)<<endl;
cout<<"sum is (5,5):"<<sum(5,5)<<endl;
cout<<"sum is (5,5,5):"<<sum(5,5,5)<<endl;
return 0;

}

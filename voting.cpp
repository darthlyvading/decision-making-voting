#include<iostream>
using namespace std;

int main()
{
	int a;
	cout<<"enter your age to check if youre eligibe to vote"<<endl;
	cin>>a;
	if(a>=18)
	{cout<<"youre eligible to vote";
		}
		else
		cout<<" sorry youll have to wait another "<<18-a<<" years"<<endl;
	return 0;	
}

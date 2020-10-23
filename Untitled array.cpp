#include<iostream>
using namespace std;
int main()
{
	int no[5],i,sum=0;
	cout<<"enter the five numbrs"<<endl;
	{
		for(i=0;i<5;i++)
		{
			cin>>no[i];
			
		}
		for(i=0;i<5;i++)
		{
			cout<<no[i];
	    	sum=sum+no
			[i];
	    }
	    cout<<"total is="<<sum<<endl;
    }
	return 0;
}

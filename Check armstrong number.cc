#include<bits/stdc++.h>
using namespace std;

int main()
{
	cout<<"enter the number :: ";
	int n,temp;
	cin>>n;
	int result=0;
	temp=n;
	while(n!=0)
	{
		int rem=n%10;
		n=n/10;
		result+=pow(rem,3);
	}
	if(result==temp)
		cout<<"armstrong number";
	else
		cout<<"OOPS! not an armstrong number";
	return 0;
}

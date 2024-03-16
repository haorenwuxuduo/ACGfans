#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
unsigned long long  jc(int a);
unsigned long long  jc1(int m,int n );
int main()
{
	label:
	cout<<"___1:A___2:C___3:!___"<<endl;
	int choise;
	if (cin>>choise)
	{
		if (choise==1)
		{
		int m,n;
		cout<<"你将从n中选取m个元素"<<endl;
		cout<<"m="<<endl;
		cin>>m;
		cout<<"n="<<endl;
		cin>>n;
		if(m,n)
		{
			if(n>=m)
			{
		unsigned long long N= jc1(m,n);
		cout<<N<<endl;
		goto label;	
			}
			if (n<m)
			{
			cout<<"请勿卡bug(￣_,￣ )"<<endl;
			goto label;
			}
		}
		}
		if (choise==2)
		{
			int m,n;
			cout<<"你将从n中选取m个元素"<<endl;
			cout<<"m="<<endl;
			cin>>m;
			cout<<"n="<<endl;
			cin>>n;
			if(m,n)
			{
				if(n>=m)
				{
			unsigned long long N= jc1(m,n);
			unsigned long long M= jc(m);
			unsigned long long S=N/M;
			cout<<S<<endl;
			goto label;	
				}
				if (n<m)
				{
				cout<<"请勿卡bug(￣_,￣ )"<<endl;
				goto label;
				}
			}
		}
		if (choise==3)
		{
			int a;
			cin >> a;
			unsigned long long B=jc(a);
			cout<<a<<"!="<<B<<endl;
			goto label;	
		}
	}
}
unsigned long long  jc(int a)
{
	unsigned long long  b = a;//变量b用于存储输出结果
		while (a > 1)
		{

			a = a - 1;
			b = a * b;
		}
	return b;
}
unsigned long long  jc1(int m,int n)
{
	int N=n;
		while (m>1)
		{
			m=m-1;
			n=n-1;
			N=n*N;
		}
		return N;
}

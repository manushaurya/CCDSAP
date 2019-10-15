#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,l;
		cin>>n>>k;
		string forgotten[n];
		int size[k];
		string modern[100][100];
		for(int i=0;i<n;i++)
			cin>>forgotten[i];
		for(int i=0;i<k;i++)
		{
			cin>>size[i];
			int x = size[i];
			for(int j=0;j<x;j++)
				cin>>modern[i][j];
		}
		
		for(int i=0;i<n;i++)
			{
				bool flag = false;
				for(int j=0;j<k;j++)
				{
					int x = size[j];
					for(int k=0;k<x;k++)
					{
						if(!(forgotten[i].compare(modern[j][k])))
							flag=true;
					}
				}
				if(flag)
					cout<<"YES"<<endl;
				else
					cout<<"NO"<<endl;
			}	
			
		
	}
	return 0;
}

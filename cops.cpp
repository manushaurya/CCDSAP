#include <iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,x,xy,y,cop_loc[100],count=0;
		cin>>m>>x>>y;
		xy = x*y;
		for(int i=0;i<m;i++)
		{
			cin>>cop_loc[i];
		}
		for(int i=1;i<=100;i++)
		{
			bool reachable=false;
			for(int j=0;j<m;j++)
			{
				if(i<=cop_loc[j] && cop_loc[j]-xy<=i)
					reachable=true;
				if(i>cop_loc[j] && cop_loc[j]+xy>=i)
					reachable=true;
			}
			if(reachable)
				count += 1;
		}
		cout<<100-count<<endl;
	}
	return 0;
}

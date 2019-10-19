#include <iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,count=0;
		cin>>n;
		char str[n];
		for(long long int i=0;i<n;i++)
		{
			cin>>str[i];
			if(str[i]=='1')
				count += 1;
		}
		cout<<(count*(count+1))/2<<endl;
	}
	return 0;
}

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,mid;
		string str,lstr,rstr;
		cin>>str;
		lstr="";
		rstr="";
		n = str.length();
		mid = n/2;
		lstr = str.substr(0,mid);
		if(n%2==0)
			rstr = str.substr(mid,n-1);
		else
			rstr = str.substr(mid+1,n-1);
		sort(&lstr[0],&lstr[0]+lstr.length());
		sort(&rstr[0],&rstr[0]+rstr.length());
		if(lstr==rstr)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;

	}
	return 0;
}


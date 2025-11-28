#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		string r("Timru");
		cin>>s;
		sort(s.begin(),s.end());
		if(s==r) {
            cout<<"YES"<<endl;
            }
		else {
            cout<<"NO"<<endl;
            }
	}
    return 0;
}
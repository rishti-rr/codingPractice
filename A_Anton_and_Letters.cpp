#include <bits/stdc++.h>
using namespace std;
int main() {
	char s;
	set<char>r;
	while (cin>>s) {
		if (s!='{' && s!=',' && s!='}')
			r.insert(s);
	}
	cout<<r.size()<<endl;
	return 0;
}

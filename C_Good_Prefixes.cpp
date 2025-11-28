#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
         long long int n, sum = 0, cnt = 0;
    set<long long int> st;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        st.insert(2 * a[i]);
        auto it = st.find(sum);
        if (it != st.end())
            cnt++;
    }
    cout << cnt<<endl;
    }
    
}
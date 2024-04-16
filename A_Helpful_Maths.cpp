
 
// #include <bits/stdc++.h>
 
// using namespace std;
 
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
 
//     string s;
//     cin>>s;
//     sort(s.begin(),s.end());
//     for(long long unsigned int i =0; i<s.size();i++) 
//     {
//     	if(s[i]=='+') continue;
//     	if(i!=s.size()-1)
//     	{
//     		cout<<s[i]<<'+';
//     	}
//     	else cout <<s[i];
//     }
 
//     return 0;
// }


// #include<iostream>
// #include<string.h>
// using namespace std;
// int main()
// {
//     int temp,i,j;
//     string s;
//     cin>>s;
//     for(i=0;i<s.size();i++)
 
//     {
//        for(j=0;j<s.size()-1;j=j+2)
//        {
//            if(s[j]>s[j+2])
//            {
//                temp=s[j];
//                s[j]=s[j+2];
//                s[j+2]=temp;
//            }
//        }
//     }
//     cout<<s;
// }
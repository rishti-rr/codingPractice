#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,a[100],count=0,i;
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(i=0; i<n; i++){
        if(a[k-1]<=a[i] && a[i]!=0){
            count++;
        }
    }
    cout<<count;
}


// #include<stdio.h>
// int main()
// {
//     int n,k,count=0,p,i;
//     scanf("%d %d",&n,&k);
//     int a[n];
//     for(i=0;i<n;i++) {scanf("%d",&a[i]);}
//     p=a[k-1];
//     for(i=0;i<n;i++)
//     {
//         if(a[i]>0&&a[i]>=p) {count++;}
//     }
//      printf("%d\n",count);
 
//  return 0;
// }
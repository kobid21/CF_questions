#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--){
       int w,h;
       long long int n;
       cin>>w>>h>>n;
       int y=1;
       while(w%2==0){
           y=y*2;
           w=w/2;
       }
        while(h%2==0){
           y=y*2;
           h=h/2;
       }
        if(y>=n){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
   }
}

#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int f=2;
    long long int b[7];
    for(int i=0;i<7;i++){
        cin>>b[i];
    }
    long long int x,y,z;
    x=b[0];
    y=b[1];
    int i=2;
    while(f){
        if(x+y+b[i]==b[6]){
           z=b[i];
            break;
        }
        i++;
    }
    cout<<x<<" "<<y<<" "<<z;
    cout<<endl;
 
}
    return 0;
}
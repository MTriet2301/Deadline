#include<bits/stdc++.h>
using namespace std;
int a[50];
int b[50];
int main(){
    int t;
    cin>>t;
    for(int y=0;y<t;y++){
        int n;
        cin>>n;
        for(int i=0;i<50;i++){
            a[i]=0;
            b[i]=0;
        }
        for(int i=0;i<n;i++){
            cin>>a[i]>>b[i];
        }
        int cnt=0,ans=0;
        for(int i=0;i<n;i++){
            if(b[i]>cnt and a[i]<11){
                cnt=b[i];
                ans=i+1;
            }
        }
        cout<<ans<<endl;
    }
}
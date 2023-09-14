#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;
#define ll long long
 
int main(){
    int t; cin>>t;
    while(t--){
        int a,b,c; cin>>a>>b>>c;
        if(a>b && a<c || a<b && a>c ) cout<<a<<"\n";
        else if(b<a && b>c || b>a && b<c) cout<<b<<"\n";
        else  cout<<c<<"\n";
    }
    return 0;
}
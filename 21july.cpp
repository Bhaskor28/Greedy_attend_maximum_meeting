// Depressed boy Bhaskor Roy
#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define       forn(i,n)              for(int i=0;i<n;i++)
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()

#define            pb                push_back
#define          sz(a)               (int)a.size()
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'


void s1(){
int st[]={1,3,0,5,8,5};
int fn[]={2,4,6,7,9,9};

int l=sizeof(st)/sizeof(st[0]);
vector<pair<int,int>>v;
for(int i=0;i<l;i++){
    v.pb(make_pair(fn[i],st[i]));

}
sort(v.begin(),v.end());
int k=0;
for(int i=0;i<l;i++){
    cout<<"finis :"<<v[i].first<<"start : "<<v[i].second<<endl;


}




int i=0;

cout<<"start: "<<v[i].second<<"end: "<<v[i].first<<endl;
for(int j=1;j<l;j++){
    if(v[i].first<=v[j].second){
        //cout<<"start: "<<v[i].second<<"end: "<<v[i].first<<endl;
        i=j;
        cout<<"start: "<<v[i].second<<"end: "<<v[i].first<<endl;
    }




}




}



int main(){
s1();



return 0;
}

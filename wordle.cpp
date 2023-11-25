#include<iostream>
#include<time.h>
using namespace::std;
int main(){
    srand(time(0));
    string rw[100]={"handle","sandbar","spin","ring","shot","shopkeeper","silk","milk","rusk","husky","tuskers","laptop","acronym","dustin","lucas","will","eleven","pinkman","steve","tuco","madara","kakashi","shisui","itachi","ichigo"};
    int t=0;
    while(!rw[t].empty())t++;
    int rind=rand()%t;
    string cs=rw[rind];
    cout<<cs;
    int sn=cs.length();
    string us;
    char rp[sn]; int k=0; char ex[sn];int l=0;
    cout<<"We've chosen a "<<sn<<" letter word for you: \n";
    cout<<"Enter your word: ";
    cin>>us;
    if(cs==us) {cout<<"YAY you've won";return 0;}
    for(int i=0;i<sn;i++){
        int f=0;
        if(us[i]==cs[i]){
            rp[k++]=us[i];
        }
        for(int j=0;j<sn;j++){
            if(us[i]==cs[j]){
                ex[l++]=us[i];break;
            }
        }
    }
    // cout<<k<<l;
    if(k==0) cout<<"\nNo words are at right pos";
    else{
        cout<<"\nWords at right pos: ";
        for(int i=0;i<k;i++) cout<<rp[i]<<" ";
    }
    if(l==0) cout<<"\nNone of the letters exist";
    else{
        cout<<"\nWords that exist: ";
        for(int i=0;i<l;i++) cout<<ex[i]<<" ";
    }
return 0;
}

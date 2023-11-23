#include<iostream>
bool chkp(int n);
using namespace::std;
int main(){
 int n;
 cout<<"Enter the upper limit: ";
 cin>>n;
for(int i=1;i<=n;i++){
    if(chkp(i)) cout<<i<<"-YES\n";
    else cout<<i<<"-NO\n";
}
return 0;
}
bool chkp(int n){
 for(int i=2;i<=n/2;i++){
    if(n%i==0) return false;
 }
 return true;
}
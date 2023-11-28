#include<iostream>
const int n=4;
using namespace::std;
int maze[n][n];
int sol[n][n];
void cat(); void act();
int main(){
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>maze[i][j];
    }
}
act();
cout<<endl;
cat();
}

void act(){
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(maze[i][j]==1) break;
        if(maze[i][j]==0)
        sol[i][j]=1;
        
    }
}
}
void cat(){
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<sol[i][j]<<" ";
    }
    cout<<endl;
}
}
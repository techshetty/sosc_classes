#include<iostream>
const int n=4;
using namespace::std;
int maze[n][n];
int sol[n][n];
void cat(); int act(int,int);
int main(){
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>maze[i][j];
    }
}
cout<<act(0,0);
cout<<endl;
// cat();
}

int act(int i,int j){
    if(i==n-1&&j==n-1) cout<<"valid";
    if(maze[i][j]==0){
        if(maze[i+1][j]==0) act(i+1,j);
        else if(maze[i][j+1]==0) act(i,j+1);
    }
    return 0;
}
void cat(){
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<sol[i][j]<<" ";
    }
    cout<<endl;
}
}
#include<iostream>
#include<time.h>
using namespace::std;
int main(){
    srand(time(0));
    int t=10;
    int c=rand()%100+1; int un;
    while(t--){
    cout<<"Enter a number (1-100): ";
    cin>>un;
    if(c==un) {cout<<"YAY! You won in "<<10-t<<" tries";return 0;}
    else if(abs(c-un<10)) cout<<"\nYoure pretty close mate!!";
    else if(c>un) cout<<"Too low!! try again\n";
    else cout<<"Too high!!! Try again\n";
}
cout<<"Youre out of tries. The number was :"<<c;
return 0;
}
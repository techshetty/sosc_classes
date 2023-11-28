#include<iostream>
int cs=0;
using namespace::std;
typedef struct{
string name;
string usn;
}student;
void search(student[],string,int);
void add(student[]);
int main(){
    student s[100]; int ch;
     string ss;
    
    while(true){
    cout<<"Enter your choice: ";
    cin>>ch;
    switch(ch){
        case 1: add(s); break;
        case 2:  for(int i=0;i<cs;i++){
        cout<<"Student "<<i+1<<" 's name: "<<s[i].name<<endl;
        cout<<"Student "<<i+1<<" 's USN: "<<s[i].usn<<endl;
    }break;
        case 3: 
        cout<<"Enter the USN you wanna search: ";
        cin>>ss;
        search(s,ss,cs); break;

        case 4: exit(0);
        default: break;
    }
}}
void search(student s[],string ss,int n){
    for(int i=0;i<n;i++){
        if(ss==s[i].usn){
            cout<<"The Student's name is: "<<s[i].name<<endl;
        }
    }
}
void add(student s[]){
cout<<"Enter student "<<cs+1<<" 's name: ";
        cin>>s[cs].name;
        cout<<"Enter student "<<cs+1<<" 's USN: ";
        cin>>s[cs].usn;
        cs++;
}
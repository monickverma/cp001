#include<iostream>
using namespace std;
void technique1(int a,int b){
if(a==10 && b==1){
        cout<<"Yes";
     }
     if(b==10 && a==1){
      cout<<"Yes";
     }
     else if(a+1==b){
        cout<<"Yes";
     }
     else{
        cout<<"No";
     }
}
void technique2(int a,int b){
   if(b-a==1 || b-a==9)cout<<"Yes";   
   else cout<<"No";
}
int main(){
      int a, b;
     cin>>a>>b;
     //technique1(a,b);
     technique2(a,b);
    
}
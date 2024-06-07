#include<iostream>
using namespace std;
void technique1(int a,int b,int c){
bool flag=false;
        for (int i=a;i<=b;i++){
            if(i%c==0){
                cout<<i;
                flag=true;
                break;
            }
        }  
        if(!flag){
            cout<<-1;
        }
}
void technique2(int a,int b,int c){
    bool flag=false;
    for(int i=1;i<=b/c;i++){
        if(c*i>=a && c*i<=b) {cout<<c*i;
        flag=true;
                break;
        
        }
         
    }
    if(!flag){
            cout<<-1;
        }
}
void technique3(int a,int b,int c){
    int Y=(b/c)*c;
    if(a<=Y)cout<<Y;
    else cout<<-1;
    }
int main(){
        int a,b,c;
      cin>>a>>b>>c;
      //technique1(a,b,c);
      //technique2(a,b,c);
        technique3(a,b,c); 
}
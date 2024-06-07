#include<iostream>
using namespace std;
int main(){
    string f1="monick";
    string f2="verma";
    cout<<f1+f2<<"\n";
    cout<<f1.append(f2)<<"\n";
    cout<<f1.length()<<"\n";
    cout<<f1[0]<<"\n";
    f1[0]='M';
    cout<<f1;
}
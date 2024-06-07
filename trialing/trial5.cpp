#include<iostream>
using namespace std;
int main(){
    struct{
        int size;
        string color;

    }   Triangle;
    Triangle.size=8;
    Triangle.color="yellow";
    string food="pizza";
    string meal=food;
    string &meal2=food; //memory shit
    cout<<"\n"<<meal<<"\n"<<meal2<<"\n";
    cout<<&food<<"\n";
    string* ptr = &food;
    cout<<ptr;
}
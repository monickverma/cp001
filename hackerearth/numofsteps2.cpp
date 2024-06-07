#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    int abcd[n][n];

    for(int i=0;i<n;i++){
        abcd[i]=a[i];
        for(int j=0;j<n;j++)
            abcd[i][j]=b[j];
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cout<<abcd[i][j]<<endl;
}
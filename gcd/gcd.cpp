#include<iostream>
using namespace std;

int gcd(int a, int b){
    if (a==0)
        return b;
    return gcd(b%a, a);
}

int main(){
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    if (a<=b){
        cout<<gcd(a,b);
    }
    else{
        cout<<gcd(b,a);
    }
    return 0;
}

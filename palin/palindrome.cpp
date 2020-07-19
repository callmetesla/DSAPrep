#include<iostream>
using namespace std;
bool is_palindrome(int n){
    int copy = n;
    int reverse=0;
    while(n){
       reverse = reverse* 10 + (n%10) ;
       n /= 10;
    }
    return reverse == copy;
}
int main(){
    int n;
    cout<<"Check if the number is palindrome: ";
    cin>>n;
    bool is_palin = is_palindrome(n);
    if (is_palin)
        cout<<"Yo it is palin indeed";
    else
        cout<<"Nope";
    return 0;
}

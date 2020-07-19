#include<iostream>
using namespace std;

int fibonacci_recursive(int n) {
  if (n <= 2)
    return 1;
  return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

void fibonacci(int n){
    unsigned long long f1 =0, f2= 1;
    unsigned long long next;
    cout<<f1<<"\n"<<f2<<endl;
    while(n--){
    next = f1 + f2;
    cout<<next<<endl;
    f1 = f2;
    f2 = next;
    }
}
int main(){
    int n;
    cout<<"N val: ";
    cin>>n;
    cout << "Output recursive: " << fibonacci_recursive(n)<<"\n";
    cout << "Fib straight: ";
    fibonacci(n-1);

    return 0;
}


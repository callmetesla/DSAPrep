//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int binary_search(int left, int right, int a[], int search_num){
    int mid = left + (right -left)/2;
    if (right>=left){
        if(a[mid] == search_num){
            return mid;
        }
        else if(search_num < a[mid]){
           return binary_search(left, mid-1, a, search_num);
        }
        else{
           return binary_search(mid+1, right, a, search_num);
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter number to search: ";
    int search_num;
    cin>>search_num;
    cout<<"Found in index: "<<binary_search(0, n-1, a, search_num) ;
return 0;
}

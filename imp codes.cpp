#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long int>

int main(){
#ifndef ONLINE_JUDGE
freopen("in.txt","r",stdin);
freopen("out.txt","w",stdout);
void selection_sort(int arr[], int n){
    for(int i=0;i<=n-2;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
}
void bubble_sort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-i-1;j++){
            if(arr[j] > arr[j+1]){
              int temp=arr[j+1];
              arr[j+1]=arr[j];
              arr[j]=temp;  
            }
        }
    }
}
void insertion_sort( int arr[], int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
}
#endif
std::ios::sync_with_stdio(false);

}
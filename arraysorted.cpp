#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 1, 2, 2, 3, 4, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int i = 0;
    int j = i +1;

    while(j < n){
        if(arr[i] == arr[j]){
            j++;
        }else if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
        
    }
    int c = i;
    i++;
    while(i < n){
        arr[i] = 0;
        i++;
    }

    for(int k = 0; k < n; k++){
        cout<<arr[k];
    }
    cout<<c+1;


    
}
// Input:  {1, 2, 3, 4, 5}
// Output: {5, 4, 3, 2, 1}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0, j = n -1;

    while(i < j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    
    for(int i = 0; i < n; i++){
        cout<<arr[i];
    }
    
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {INT_MIN, 10, 10, 5, 20};

    int maxi = INT_MIN;
    int smaxi = INT_MIN;
    bool hasSecond = false;

    for(int i = 0; i < 5; i++){

        if(arr[i] > maxi){
            if(maxi != INT_MIN || i > 0){
                smaxi = maxi;
                hasSecond = true;
            }
            maxi = arr[i];
        }
        else if(arr[i] < maxi && (!hasSecond || arr[i] > smaxi)){
            smaxi = arr[i];
            hasSecond = true;
        }
    }

    if(hasSecond)
        cout << smaxi;
    else
        cout << -1;
}
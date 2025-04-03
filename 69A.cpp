//nice
//g++ -Wall -std=c++17 69A.cpp -o 69A
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool solve (int n, int arr[][3]){
    int force[3] = {0, 0 , 0};
    for (int i = 0; i < n; i++){
        force[0] += arr[i][0];
        force[1] += arr[i][1];
        force[2] += arr[i][2];
    }
    return (force[0] == 0 && force[1] == 0 && force[2] == 0);
};

int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int arr[n][3];
    for (int i = 0; i < n; i++) cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    bool solution = solve(n, arr);
    if (solution) cout<<"YES";
    else cout<<"NO";
    return 0;
}
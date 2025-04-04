#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(){
    string input;
    cin>>input;
    int count = 1;
    int max_count = 1;
    for (size_t i = 1; i < input.size() ; i++){
        if (input[i] == input[i-1]){
            count++;
        }
        if (input[i] != input[i-1]){
            count = 1;
        }
        if (count > max_count){
            max_count = count;
        }
    }
    
    if (max_count >= 7) cout << "YES" << endl;
    else cout << "NO" << endl;
    return;
};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
};
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(){
    string n; 
    cin>>n;
    bool is_nearly_lucky = true;
    int count_lucky = 0;

    for (size_t i = 0; i < n.size(); i++){
        if (n[i] == '7' || n[i] == '4'){
            count_lucky++;
        }
    }
    is_nearly_lucky = count_lucky == 7 || count_lucky == 4;

    if (is_nearly_lucky){
        cout<< "YES" << endl;
        return;
    }
    else{
        cout<<"NO"<<endl;
        return;
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
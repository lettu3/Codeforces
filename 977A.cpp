//g++ -Wall -std=c++17 977A.cpp -o 977A
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int solve (int n, int k){
    int res = n;
    for (int i = 0; i < k; i++){
        if (res % 10 == 0){
            res = res / 10;
        }
        else {
            res--;
        }
    }
    return res;
}

int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    int solution = solve(n, k);
    cout << solution << "\n";
    return 0;
}
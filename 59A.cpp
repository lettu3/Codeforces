//g++ -Wall -std=c++17 59A.cpp -o 59A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

char to_lower(char c){
    return ((c >= 'A' && c <= 'Z') ? (char)c + 32 : c);
};

char to_upper(char c){
    return ((c >= 'a' && c <= 'z') ? (char)(c - 32) : c);
};

bool is_upper(char c){
    return (c >= 'A' && c <= 'Z');
}


string solve (string s){
    string output;

    int up = 0;
    int lower = 0;
    for (size_t i = 0; i < s.size(); i++){
        if (is_upper(s[i])) up++;
        else lower++;
    }

    if (up > lower){
        for (size_t i = 0; i < s.size(); i++){
            output += to_upper(s[i]);
        }
    }
    else {
        for (size_t i = 0; i < s.size(); i++){
            output += to_lower(s[i]);
        }
    }
    return output;
}

int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string input;
    cin>>input;
    string output = solve(input);
    cout<< output << "\n";
    return 0;
}
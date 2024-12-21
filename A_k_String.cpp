#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    map<char, int> map;
    for(char c: s){
        map[c]++;
    }

    for(auto &entry : map){
        if(entry.second % n !=0){
            cout<< -1 << endl;
            return 0;
        }
    }

    string base="";
    for(auto &entry : map){
        base+=string(entry.second/n, entry.first);
    }

    string result = "";
    for(int i=0; i<n; i++){
        result+=base;
    }
    cout << result << endl;
    return 0;
}




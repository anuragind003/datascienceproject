#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> week(7);
    for(int i=0 ; i<7 ; i++){
        cin >> week[i];
    }

    int day = 0;
    while(n>0){
        n-= week[day];
        if(n<=0){
            cout << day +1 <<endl;
        }
        day = (day+1)%7;
    }
    return 0;



}
// problem link
// https://codeforces.com/problemset/problem/1579/A

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;

        int ca = 0, cb = 0, cc = 0;

        for(char i : str){
            if(i == 'A'){
                ca++;
            }else if(i == 'B'){
                cb++;
            }else{
                cc++;
            }
        }

        if((ca + cc) == cb){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}

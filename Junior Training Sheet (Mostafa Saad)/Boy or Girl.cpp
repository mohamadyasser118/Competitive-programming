#include <bits/stdc++.h>
#define fast  ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;

using namespace std;

const int N = 1e5;

int  main() {

    string s; cin >> s;
    map<char, bool> m;
    int ans = 0;
    for(int i=0; i<s.size(); i++){
        if(m[s[i]]==0){
            ans++;
        }
        m[s[i]] = 1;
    }

    if(ans%2 != 0){
        cout << "IGNORE HIM!" << endl;
    }
    else {
        cout << "CHAT WITH HER!" << endl;
    }
}

#include <bits/stdc++.h>
#define fast  ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;

using namespace std;

const int N = 1e5;


int  main() {

    string s; cin >> s;
    int l=0, r=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]-'0'>=17 && s[i]-'0'<=42){
            r++;
        }
        else {
            l++;
        }
    }
    if(r>l){
        for(int i=0; i<s.size(); i++){
            s[i] = toupper(s[i]);
            cout << s[i];

        }
    }
    else if(l>r){
        for(int i=0; i<s.size(); i++){
            s[i] = tolower(s[i]);
            cout << s[i];
        }
    }
    else {
        for(int i=0; i<s.size(); i++){
            s[i] = tolower(s[i]);
            cout << s[i];
        }
    }
}

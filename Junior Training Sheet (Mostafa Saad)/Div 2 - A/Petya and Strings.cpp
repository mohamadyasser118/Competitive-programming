#include <bits/stdc++.h>
#define fast  ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;

using namespace std;

const int N = 1e5;


int  main() {

    string a,b; cin >> a >> b;
    for(int i=0; i<a.size(); i++){
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }
    int ans = 0;
    for(int i=0; i<a.size(); i++){
        if(a[i]-'a' < b[i]-'a'){
            ans = -1 ;
            break;
        }
        else if(a[i]-'a' > b[i]-'a'){
            ans = 1;
            break;
        }
    }
    cout << ans << endl ;
}

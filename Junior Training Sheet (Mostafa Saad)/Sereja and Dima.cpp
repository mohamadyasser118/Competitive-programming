#include <bits/stdc++.h>
#define fast  ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;

using namespace std;

const int N = 1e5;

int  main() {

    int n ; cin >> n;
    vector<int> v(n);
    int s = 0, d = 0;
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int a=1;
    int l = 0, r = n-1;
    while(l<=r){
        if(v[l]>v[r]) {
            if (a){
                s += v[l];
                a = 0;
                l++;
                continue;
            }
            if (!a) {
                d += v[l];
                a = 1;
                l++;
                continue;
            }
        }
        else{
            if (a){
                s += v[r];
                a = 0;
                r--;
                continue;
            }
            if (!a) {
                d += v[r];
                a = 1;
                r--;
                continue;
            }

        }
    }
    cout << s << " " << d << endl;

}

#include <iostream>
#include <vector>
#include <cmath>
#include <map>
#include <math.h>
#include <algorithm>
#include <deque>
#include <set>
#define fast  ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;

using namespace std;

const int N = 1e5;


int  main() {

    int a,b; cin >> a >> b;
    int ans =0;
    while(a<=b){
        a*=3;
        b*=2;
        ans++;
    }
    cout << ans << endl ;
}


 
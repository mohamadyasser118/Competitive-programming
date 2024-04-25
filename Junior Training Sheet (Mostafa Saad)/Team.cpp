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

    int n; cin >> n ;
    int a,b,c;
    int ans = 0;
    while(n--){
        cin >> a >> b >> c;
        int res = a+b+c;
        if(res > 1) ans++;
    }
    cout << ans << endl;
}



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

    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }
}

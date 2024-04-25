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

    int arr[5][5];
    int ans = 0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> arr[i][j];
            if(arr[i][j]==1){
                ans = abs(i-2) + abs(j-2);
            }
        }
    }
    cout << ans << endl ;
}

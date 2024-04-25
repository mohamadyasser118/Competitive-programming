#include <bits/stdc++.h>
#define fast  ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;

using namespace std;

const int N = 1e5;

vector<ll> notprime(1e6 + 9);
vector<ll> prime;



vector<ll> prime_factorization(long long n){
    vector<long long> divs;
    while(n%2==0){
        divs.push_back(2);
        n/=2;
    }
    for(long long i=3; i*i <= n; i+=2){
        if(n%i == 0){
            divs.push_back(i);
            n/=i;
        }
    }
    if(n!=1) divs.push_back(n);

    return divs;


}

vector<ll> divisors(long long n){
    vector<long long> divs;

    long long i;
    for(i=1; i*i < n; i++){
        if(n%i == 0){
            divs.push_back(i);
            divs.push_back(n/i);
        }
    }
    if(i*i == n) divs.push_back(i);

    return divs;

}

void seive(){

    notprime[0] = 1;
    notprime[1] = 1;
    for(ll i=2; i<1e6; i++){
        if(!notprime[i]){
            prime.push_back(i);
            for(ll j = i*i; j<1e6; j+=i){
                notprime[j] = 1;
            }
        }
    }
}


int  main() {

    int t; cin >> t;
    string s;
    vector<int> v(t);
    int ans = 0;
    for(int i=0; i<t; i++){
        cin >> v[i];
    }
    for(int i=0; i<t; i++) {
        if (v[i] != v[i + 1])
            ans++;
    }

    cout << ans << endl;
}

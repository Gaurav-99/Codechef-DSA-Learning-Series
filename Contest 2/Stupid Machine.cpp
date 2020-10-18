//Keep calm and carry on..

/*  Problem :Stupid Machine:STUPMACH
    URL : https://www.codechef.com/LRNDSA02/problems/STUPMACH
*/

#include<bits/stdc++.h>

using namespace std;
typedef long long int  ll ;
typedef unsigned long long int ull;
typedef long double ld;


# define fast           ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
# define pb             push_back
# define pi             3.1415926535897932384626
# define mod            1000000007
# define endl          '\n'
# define DEBUG          false
# define F              first
# define S              second
# define loop1(i,a,b)   for(ll i = a; i<b; i++)
# define loop2(i,a,b)   for(ll i = b-1; i>=a; i--)
# pragma GCC optimize "trapv"


 void just_solved_it(){
    int n;  cin >> n;
    ll s[n];
    loop1(i,0,n)    cin >> s[i];

    /*cout << min_element(s,s+n) << " " << *min_element(s,s+n);
    cout << "\n" << sizeof(s[0]) << " " << &s[0] << " "<< (min_element(s,s+n) - &s[0]) <<" "; */

    ll midx = s[0];
    ll ans = s[0];
    loop1(i,1,n){
        midx = min(s[i], midx);
        ans += midx;
    }
    cout << ans ;
}
 int main(){
     fast;
     int t;     cin >> t;
     while (t--){
         just_solved_it();
         cout << "\n";
     }

     return 0;
}


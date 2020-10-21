//Keep calm and carry on..

/*  Problem :Penalty Shoot-Out II:PSHOT
    URL : https://www.codechef.com/LRNDSA02/problems/PSHOT
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
     int n;     cin >> n;
     string s;  cin >> s;
     ll ca = 0, cb = 0;
     ll ra = n, rb = n;
     ll ans = 2 * n;
     loop1(i,0,2*n){
         
         if (i % 2 == 0){
             if (s[i] == '1') ca++;
             ra--;
            } 
         else {
             if(s[i] == '1') cb++;
             rb--;
            }
            
         if ((cb > ra + ca) || (ca > rb + cb)) {
             ans = i + 1;
             break;
            }
         
        }
    cout << ans;
    
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


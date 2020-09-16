//Keep calm and carry on..

/*  Problem :Carvans:CARVANS
    URL :https://www.codechef.com/LRNDSA01/problems/CARVANS

*/

#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
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
     ll n;      cin>>n;
     ll a[n];
     loop1(i,0,n)   cin>>a[i];
     ll ans = 0;
     loop1(i,0,n-1){
         if (a[i] < a[i+1])     a[i+1] = a[i];
         else ans++;
     }
     cout<<ans+1;
     
 }
 
 int main(){
     fast;
     ll t;      cin>>t;
     
     while(t--){
         just_solved_it();
         cout<<endl;
     }

     return 0;
 }


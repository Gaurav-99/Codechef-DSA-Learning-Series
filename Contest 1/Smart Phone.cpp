//Keep calm and carry on..

/*  Problem :Smart Phone:ZCO14003
    URL :https://www.codechef.com/LRNDSA01/problems/ZCO14003

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
 

 int main(){
     fast;
     ll n;     cin>>n;
     ll a[n], sum[n] = { 0 };
     
     loop1(i,0,n)   cin>>a[i];
     sort(a,a+n);
     
     loop1(i,0,n){
         sum[i] = a[i]*(n-i);
        
     }
    cout<<(*max_element(sum,sum+n));
     return 0;
}


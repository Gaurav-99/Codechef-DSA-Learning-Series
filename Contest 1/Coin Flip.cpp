//Keep calm and carry on..

/*  Problem :Coin Flip:CONFLIP
    URL :https://www.codechef.com/LRNDSA01/problems/CONFLIP
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
     int g;     cin>>g;
     int I, n,q;
     loop1(i,0,g){
         cin>>I>>n>>q;
         
         if (n % 2 == 0)    cout<<n/2;
         else{
             if (I ==  q)  cout<<n/2;
             else cout<<(n/2)+1;
         }
         cout<<endl;
     }
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

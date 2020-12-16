//Keep calm and carry on..

/*  Problem :Laddu 
    URL :codechef.com/LRNDSA01/problems/LADDU
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
# define lp1(i,a,b)   for(ll i = a; i<b; i++)
# define lp2(i,a,b)   for(ll i = b-1; i>=a; i--)
# pragma GCC optimize "trapv"

int sumDigits(int no) {
	return no == 0 ? 0 : no % 10 + sumDigits(no / 10) ;
}

void just_solved_it() {

	int actis = 0, lodus = 0, ans = 0  ;
	string orgn , actvy;

	cin >> actis >> orgn;

	lp1(i, 0, actis) {
		cin >> actvy;
		if (actvy == "CONTEST_WON") {
			int rank = 0;
			cin >> rank;
			if (rank > 20)	lodus += 300;
			else lodus += 300 + 20 - rank;
		}
		else if (actvy == "TOP_CONTRIBUTOR")	lodus += 300;
		else if (actvy == "BUG_FOUND") {
			int sevty = 0;		cin >> sevty;
			lodus += sevty;
		}
		else if (actvy == "CONTEST_HOSTED")		lodus += 50;
	}

	if ( orgn == "INDIAN")
		ans = lodus / 200;
	else ans = lodus / 400;

	cout << ans;



}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	fast;
	ll t = 1;	cin >> t;

	while (t--) {

		just_solved_it();
		cout << endl;
	}

	return 0;
}

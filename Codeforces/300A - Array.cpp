//@author KhaledAlam.net
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef stringstream ss;
typedef pair<int, int> pii;
//#########################
#define fi           first
#define se           second
#define pb           push_back
#define mp           make_pair
#define out(x)       return cout<<x,0
#define all(x)       x.begin(),x.end()
#define sz(x)        ((int)(x.size()))
#define clr(x)       memset(x,0,sizeof x)
#define rep(i,n)     for(int i=0;i<n;i++)
#define debug(x)     cerr<<"[l#: "<<__LINE__<<"] "<<#x<<" = "<<x<<endl
// v0.0.2 | Github.com/khaledalam/templates/tree/master/cpp
//##########################################################################

#define MAXN 100100

int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	freopen("input.txt", "r", stdin); //freopen("output.txt","w",stdout);

	int n, e = 0, o = 0;
	cin >> n;
	int a[n];
	rep(i,n)
	{
		cin >> a[i];
		e += a[i] < 0;
		o += a[i] > 0;
	}
	sort(a, a + n);
	if (o)
	{
		cout << 1 << ' ' << a[0] << endl;
		cout << 1 << ' ' << a[n - 1] << endl;
		cout << n - 2 << ' ';
		for (int i = 1; i < n - 1; ++i)
		{
			cout << a[i];
			if (i < n - 1) cout << ' ';
		}
	}
	else
	{
		cout << 1 << ' ' << a[2] << endl;
		cout << 2 << ' ' << a[0] << ' ' << a[1] << endl;
		cout << n - 3 << ' ';
		for (int i = 3; i < n; ++i)
		{
			cout << a[i];
			if (i < n - 1) cout << ' ';
		}
	}

}

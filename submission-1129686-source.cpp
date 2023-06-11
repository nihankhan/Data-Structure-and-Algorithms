/*
 *******************************************
 *      * AUTHOR : Nihan_Khan              *
 *      * NICK   :   NullByte              *
 *      * CREATED: 10.06.2023 09:32:37     *
 *******************************************
*/
#include <bits/stdc++.h>

#define sz size()
const int INF = 1e9+7;
#define pb(x) push_back(x)

using namespace std;

int binarySearch(long long x, long long n)
{
	long long low = 1;
	long long high = n;

	int count = 0;

	while(low < high)
	{
		long long mid = low + (high - low) / 2;

		if (x <= mid)
		{
			high = mid;
		}
		else
		{
			low = mid + 1;
		}

		count++;
	}

	return count;
}

int main(int argc, char **argv)
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long x, n;

    cin >> n >> x;

    int searches = binarySearch(x, n);

    cout << searches << endl;
    
    
    return 0;   
}


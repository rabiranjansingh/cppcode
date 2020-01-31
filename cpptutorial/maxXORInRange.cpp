#include<iostream>
#include<fstream>
using namespace std;
long long int maxXORInRange(long long int L, long long int R)
{
	long long int LXR = L ^ R;
	long long int msbPos = 0;
	while (LXR)
	{
		msbPos++;
		LXR >>= 1;
	}
	long long int maxXOR = 0;
	long long int two = 1;
	while (msbPos--)
	{
		maxXOR += two;
		two <<= 1;
	}
	return R | maxXOR;
}
int main()
{
	long long int L, R, t;
	cin >> t;
	while (t--)
	{
		cin >> L >> R;
		cout << maxXORInRange(L, R) << endl;
	}


	int n = 0;
	std::cin >> n;
	return 0;
}
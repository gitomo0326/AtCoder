#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;

	vector<string> S(K);
	string s;
	
	cin >> s;
	S[0] = s;

	int idx;
	for (int i = 1; i < K; i++)
	{
		cin >> s;
		idx = -1;
		for (int j = 0; j < i; j++)
		{
			if (s <= S[j])
			{
				idx = j;
				break;
			}
		}
		if (idx == -1)
		{
			S[i] = s;
		}
		else
		{
			S.insert(S.begin() + idx, s);

		}
	}
	for (int i = 0; i < K; i++)
	{
		cout << S[i] << endl;
	}
}
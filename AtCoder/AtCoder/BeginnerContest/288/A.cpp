#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	int N;
	cin >> N;


	int A, B;
	vector<int> result(N);

	for (int i = 0; i < N; i++)
	{
		cin >> A >> B;
		result[i] = A + B;
		cout << result[i] << endl;
	}
}


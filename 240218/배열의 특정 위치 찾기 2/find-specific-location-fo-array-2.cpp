#include <iostream>
using namespace std;

int arr[10];

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0; i < 10; i++) cin >> arr[i];

	int o_sum = 0, e_sum = 0;
	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0) o_sum += arr[i];
		else e_sum += arr[i];
	}

	cout << abs(o_sum - e_sum);

	return 0;
}
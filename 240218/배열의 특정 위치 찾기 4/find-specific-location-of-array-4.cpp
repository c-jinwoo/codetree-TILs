#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num, cnt = 0, sum = 0;
	for (int i = 0; i < 10; i++) {
		cin >> num;
		if (num > 0 && num % 2 == 0) {
			cnt++;
			sum += num;
		}
	}

	cout << cnt << ' ' << sum;

	return 0;
}
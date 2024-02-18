#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, cnt = 0;
	cin >> n;
	while (n--) {
		int score, sum = 0;

		for (int i = 0; i < 4; i++) {
			cin >> score;
			sum += score;
		}

		if ((double)sum / 4 >= 60) {
			cout << "pass\n";
			cnt++;
		}
		else cout << "fail\n";
	}

	cout << cnt;

	return 0;
}
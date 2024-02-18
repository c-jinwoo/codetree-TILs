#include <iostream>
using namespace std;

int arr[10];

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0; i < 10; i++) cin >> arr[i];
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 3 == 0) {
			cout << arr[i - 1];
			break;
		}
	}

	return 0;
}
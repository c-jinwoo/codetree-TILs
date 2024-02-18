#include <iostream>
using namespace std;

char arr[10];

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0; i < 10; i++) cin >> arr[i];
	cout << arr[1] << ' ' << arr[4] << ' ' << arr[7];

	return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> v;
	int n;
	cin >> n;
	while (n--) {
		string cmd;
		cin >> cmd;

		if (cmd == "push_back") {
			int num;
			cin >> num;
			v.push_back(num);
		}
		else if (cmd == "get") {
			int idx;
			cin >> idx;
			cout << v[idx - 1] << '\n';
		}
		else if (cmd == "size") {
			cout << v.size() << '\n';
		}
		else if (cmd == "pop_back") {
			v.pop_back();
		}
	}

	return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto va = vector<int>{ 1,2,3,3,4,10 };
	auto vb = vector<int>{ 1,2,2,2,3,5,10 };

	int t;
	cin >> t;
	for (auto i = 1; i <= t; ++i) {
		auto a = int{ 0 };
		for (auto j = 0; j < 6; ++j) {
			int x;
			cin >> x;

			a += va[j] * x;
		}

		auto b = int{ 0 };
		for (auto j = 0; j < 7; ++j) {
			int x;
			cin >> x;

			b += vb[j] * x;
		}

		cout << "Battle " << i << ": ";
		if (a < b) {
			cout << "Evil eradicates all trace of Good\n";
		}
		else if (b < a) {
			cout << "Good triumphs over Evil\n";
		}
		else {
			cout << "No victor on this battle field\n";
		}
	}

	return 0;
}
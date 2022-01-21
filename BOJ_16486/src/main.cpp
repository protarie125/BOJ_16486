#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	constexpr double pi = 3.141592;
	double d1, d2;
	cin >> d1 >> d2;

	cout << fixed << setprecision(8) << 2 * (d1 + pi * d2);

	return 0;
}
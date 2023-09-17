#include <iostream>
using namespace std;
int main() {
	int num, n, m;
	cin>>num;
	int firstDigit = num / 100;
	int secondDigit = (num - firstDigit*100) / 10;
	int thirdDigit = (num - firstDigit*100) % 10;
	n = firstDigit + secondDigit;
	m = firstDigit + thirdDigit;
	for (int r = 0; r < n; r++){
		for (int c = 0; c < m; c++) {
			if (num % 5 == 0) {
				num = num - firstDigit;
			}
			else if (num % 3 == 0) {
				num = num - secondDigit;
			}
			else {
				num = num + thirdDigit;
			}
		   cout << num << " ";
		}
		cout << endl;
	}
	return 0;
}

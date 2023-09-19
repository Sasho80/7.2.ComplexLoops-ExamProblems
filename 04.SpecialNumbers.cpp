#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
	for (int i =1111; i <=9999; i++){
		int firstDigit = i / 1000;
		int secondDigit = (i- firstDigit * 1000)/100;
		int thirdDigit = (i - firstDigit * 1000 - secondDigit * 100) / 10;
		int fourthDigit = (i - firstDigit * 1000 - secondDigit * 100 - thirdDigit * 10) % 10;
		if (secondDigit==0||thirdDigit==0||fourthDigit==0){
			continue;
		}
		if(num % firstDigit == 0 && num % secondDigit == 0 && num % thirdDigit == 0
				&&num%fourthDigit==0){
				cout << i << " ";
			}
	}
	return 0;
}

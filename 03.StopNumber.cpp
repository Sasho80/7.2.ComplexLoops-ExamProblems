#include <iostream>
using namespace std;
int main() {
	int n,m,s;
	cin >> n;
	cin >> m;
	cin >> s;
	for (int i = m; i >= n; i--){
		if (i%2==0&&i%3==0){
			if (i==s){
				break;
			}
			else{
				cout << i << " ";
			}
		}
	}
	return 0;
}

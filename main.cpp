#include <iostream>

using namespace std;

int main() {
	printf("Hello World\n");
	int a;
	printf("Please enter an integer: ");
	cin >> a;
	for (int i = 0; i < a - 1; i++) {
		printf("%d, ", i + 1);
	}
	printf("%d\n", a);
	cin >> a;
}

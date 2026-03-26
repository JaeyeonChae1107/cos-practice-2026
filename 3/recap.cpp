#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
	int x, y;
	cout << "Enter the first number: ";
	cin >> x;
	cout << "Enter the second number: ";
	cin >> y;

	if (x > y){
		cout << "The second number should larger than the first number!" << endl;
		return 0;
	}

	else{
		int sum = 0;
		for (int i = x; i <= y; i++){
			sum += i;
		}
	cout << sum << endl;
	}
	return 0;
	}		

#include <iostream> 
using namespace std;
int main()
{
	int num = 0, min = 100000000, max = 0, odd = 0, even = 0;
	string cool = "o";
	while (cool == "o") {
		cout << "enter num or Q to quit: ";
		cin >> num;
		if (cin.fail()) {
			break;
		}

		if (min >= num)
			min = num;

		if (max <= num)
			max = num;

		if (num % 2 == 0)
			even++;
		else
			odd++;


	}
	cout << "largest: " << max << endl << "smallest: " << min << endl << "Odd count: " << odd << endl << "even count: " << even;

	return 0;
}

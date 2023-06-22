#include <iostream>
using namespace std;
int main()
{
	cout << "\033[91mHello, world!\033[0m\n\n\n";
	for (int i = 0; i < 128; i++)
	{
		cout << i << '\t' << char(i) << '\t';
		if (!((i + 1) % 4))
		{
			cout << endl;
		}
	}
	return 0;
}
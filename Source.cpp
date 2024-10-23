#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream out;

	int x, n, mlt;
	cout << "Input x: ";
	cin >> x;
	cout << "Input n>7: ";
	cin >> n;

	if (n > 7)
	{
		out.open("result.txt");

		mlt = 1;
		if (x < 0)
		{
			for (int i = 4; i <= (n - 3); i++)
			{
				mlt = mlt * (i + x);
			}
			mlt = 13 - mlt;
		}
		else
		{
			for (int j = 1; j <= n; j++)
			{
				int sum = 0;
				for (int i = 1; i <= (n + 3); i++)
				{
					sum = sum + (i * i) * (j + (2 - x) / (i + 4));
				}
				mlt = mlt * sum;
			}
		}
		cout << mlt << endl;

		if (out.is_open())
		{
			out << mlt << endl;
		}
		out.close();
	}
	else
	{
		cout << "Incorrect input" << endl;
	}

	return 0;
}
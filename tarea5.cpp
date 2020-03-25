#include<iostream>

#include <stdio.h>

using namespace std;

int main()
{

	int n;

	cout << " diamond: ";
	cin >> n;


	for (int i = 1; i <= n; i++)
	{
		for (int k = n; k >= i; k--)
		{
			cout << " ";
		}
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		for (int m = 2; m <= i; m++)
		{
			cout << "*";
		}
		cout << endl;
	}


	for (int l = n - 1; l >= 1; l--)
	{
		cout << "  ";
		for (int q = n - 1; q > l; q--)
		{
			cout << " ";
		}

		for (int o = 1; o <= l; o++)
		{
			cout << "*";
		}

		for (int u = 2; u <= l; u++)
		{
			cout << "*";
		}
		cout << "\n";
	}


	{
		cout << " half diamond : ";
		cin >> n;


		int i, j;
		for (i = 1; i <= n; i++)


		{
			for (j = 1; j <= i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		for (i = 1; i <= n; i++)
		{
			for (j = i; j <= n; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		return 0;
	}


	return 0;
}




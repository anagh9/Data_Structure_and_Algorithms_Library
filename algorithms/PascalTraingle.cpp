// Method 1

// TC - O(n ^ 3)

void printPascal(int n)
{
	// Iterate through every line and
	// print entries in it
	for (int line = 0; line < n; line++)
	{
		// Every line has number of
		// integers equal to line
		// number
		for (int i = 0; i <= line; i++)
			printf("%d ",
			       binomialCoeff(line, i));
		printf("\n");
	}
}

int binomialCoeff(int n, int k)
{
	int res = 1;
	if (k > n - k)
		k = n - k;
	for (int i = 0; i < k; ++i)
	{
		res *= (n - i);
		res /= (i + 1);
	}

	return res;
}
// ------------------------------------------------------
// Method 2

// TC - O(n ^ 2)

void printPascal(int n)
{

	// An auxiliary array to store
	// generated pscal triangle values
	int arr[n][n];

	// Iterate through every line and
	// print integer(s) in it
	for (int line = 0; line < n; line++)
	{
		// Every line has number of integers
		// equal to line number
		for (int i = 0; i <= line; i++)
		{
			// First and last values in every row are 1
			if (line == i || i == 0)
				arr[line][i] = 1;
			// Other values are sum of values just
			// above and left of above
			else
				arr[line][i] = arr[line - 1][i - 1] +
				               arr[line - 1][i];
			cout << arr[line][i] << " ";
		}
		cout << "\n";
	}
}

// ---------------------------------------------------
// Method - 3
// TC - O(n ^ 2)

void printPascal(int n)
{

	for (int line = 1; line <= n; line++)
	{
		int C = 1; // used to represent C(line, i)
		for (int i = 1; i <= line; i++)
		{

			// The first value in a line is always 1
			cout << C << " ";
			C = C * (line - i) / i;
		}
		cout << "\n";
	}
}

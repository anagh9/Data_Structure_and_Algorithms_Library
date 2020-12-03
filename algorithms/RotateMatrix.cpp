// Rotate Square Matrix by 90 degree anticlockwise

/*

Input:
Matrix:
 1  2  3
 4  5  6
 7  8  9
Output:
 3  6  9
 2  5  8
 1  4  7
The given matrix is rotated by 90 degree
in anti-clockwise direction.

*/

void rotateMatrix(int mat[][N])
{
	for (int x = 0; x < N / 2; x++) {
		for (int y = x; y < N - x - 1; y++) {
			int temp = mat[x][y];
			mat[x][y] = mat[y][N - 1 - x];
			mat[y][N - 1 - x]
			    = mat[N - 1 - x][N - 1 - y];

			// Move values from left to bottom
			mat[N - 1 - x][N - 1 - y]
			    = mat[N - 1 - y][x];

			// Assign temp to left
			mat[N - 1 - y][x] = temp;
		}
	}
}

// TC - O(n^2)


/*

Rotate a matrix by 90 degree in clockwise direction without using any extra space

*/

void rotate90Clockwise(int a[N][N])
{

	// Traverse each cycle
	for (int i = 0; i < N / 2; i++) {
		for (int j = i; j < N - i - 1; j++) {

			// Swap elements of each cycle
			// in clockwise direction
			int temp = a[i][j];
			a[i][j] = a[N - 1 - j][i];
			a[N - 1 - j][i] = a[N - 1 - i][N - 1 - j];
			a[N - 1 - i][N - 1 - j] = a[j][N - 1 - i];
			a[j][N - 1 - i] = temp;
		}
	}
}


//Approach 2

void rotate90Clockwise(int arr[N][N])
{
	// printing the matrix on the basis of
	// observations made on indices.
	for (int j = 0; j < N; j++)
	{
		for (int i = N - 1; i >= 0; i--)
			cout << arr[i][j] << " ";
		cout << '\n';
	}
}

/*
Rotate matrix by 45 degrees
*/

void matrix(int n, int m, vector<vector<int>> li)
{

	// Counter Variable
	int ctr = 0;

	while (ctr < 2 * n - 1)
	{
		for (int i = 0;
		        i < abs(n - ctr - 1);
		        i++)
		{
			cout << " ";
		}

		vector<int> lst;

		// Iterate [0, m]
		for (int i = 0; i < m; i++)
		{

			// Iterate [0, n]
			for (int j = 0; j < n; j++)
			{

				// Diagonal Elements
				// Condition
				if (i + j == ctr)
				{

					// Appending the
					// Diagonal Elements
					lst.push_back(li[i][j]);
				}
			}
		}

		// Printing reversed Diagonal
		// Elements
		for (int i = lst.size() - 1; i >= 0; i--)
		{
			cout << lst[i] << " ";
		}
		cout << endl;
		ctr += 1;
	}
}

// TC - O(N^2)



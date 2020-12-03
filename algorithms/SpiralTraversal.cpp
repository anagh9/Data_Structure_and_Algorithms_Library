/*
Input:  1    2   3   4
        5    6   7   8
        9   10  11  12
        13  14  15  16
Output: 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

*/

//Method - 1
/*
1.Create and initialize variables k – starting row index, m – ending row index, l – starting column index, n – ending column index
2.Run a loop until all the squares of loops are printed.
3.In each outer loop traversal print the elements of a square in a clockwise manner.
4.Print the top row, i.e. Print the elements of the kth row from column index l to n, and increase the count of k.
5.Print the right column, i.e. Print the last column or n-1th column from row index k to m and decrease the count of n.
6.Print the bottom row, i.e. if k < m, then print the elements of m-1th row from column n-1 to l and decrease the count of m
7.Print the left column, i.e. if l < n, then print the elements of lth column from m-1th row to k and increase the count of l.

*/


void spiralPrint(int m, int n, int a[R][C])
{
	int i, k = 0, l = 0;

	/* k - starting row index
	    m - ending row index
	    l - starting column index
	    n - ending column index
	    i - iterator
	*/

	while (k < m && l < n) {
		/* Print the first row from
		       the remaining rows */
		for (i = l; i < n; ++i) {
			cout << a[k][i] << " ";
		}
		k++;

		/* Print the last column
		 from the remaining columns */
		for (i = k; i < m; ++i) {
			cout << a[i][n - 1] << " ";
		}
		n--;

		/* Print the last row from
		        the remaining rows */
		if (k < m) {
			for (i = n - 1; i >= l; --i) {
				cout << a[m - 1][i] << " ";
			}
			m--;
		}

		/* Print the first column from
		           the remaining columns */
		if (l < n) {
			for (i = m - 1; i >= k; --i) {
				cout << a[i][l] << " ";
			}
			l++;
		}
	}
}

// TC- O(N*M)


/*
 RECURSIVE METHOD
*/
void print(int arr[R][C], int i, int j, int m, int n)
{
	// If i or j lies outside the matrix
	if (i >= m or j >= n)
		return;

	// Print First Row
	for (int p = i; p < n; p++)
		cout << arr[i][p] << " ";

	// Print Last Column
	for (int p = i + 1; p < m; p++)
		cout << arr[p][n - 1] << " ";

	// Print Last Row, if Last and
	// First Row are not same
	if ((m - 1) != i)
		for (int p = n - 2; p >= j; p--)
			cout << arr[m - 1][p] << " ";

	// Print First Column,  if Last and
	// First Column are not same
	if ((n - 1) != j)
		for (int p = m - 2; p > i; p--)
			cout << arr[p][j] << " ";

	print(arr, i + 1, j + 1, m - 1, n - 1);
}

// Pass print(arr,0,0,row,col);

// TC - O(n*m)




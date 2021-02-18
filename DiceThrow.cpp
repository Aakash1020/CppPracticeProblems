// C++ program to find number of ways to get sum 'x' with 'n' 
// dice where every dice has 'm' faces 
#include <iostream> 
#include <string.h> 
using namespace std; 

// The main function that returns number of ways to get sum 'x' 
// with 'n' dice and 'm' with m faces. 
int findWays(int m, int n, int x) 
{ 
	// Create a table to store results of subproblems. One extra 
	// row and column are used for simpilicity (Number of dice 
	// is directly used as row index and sum is directly used 
	// as column index). The entries in 0th row and 0th column 
	// are never used. 
	
	int table[n][x]; 
	int count=0;
	memset(table, 0, sizeof(table)); // Initialize all entries as 0 
		
	// Fill rest of the entries in table using recursive relation 
	// i: number of dice, j: sum 
	for (int i = 2; i <= n; i++) 
		for (int j = 1; j <= x; j++) 
			
			for (int k = 1; k <= m && k < j; k++) 
			
				count++;

	
	for (int i = 0; i <= n; i++) 
	{ 
	for (int j = 0; j <= x; j++) 
		cout << table[i][j] << " "; 
	cout << endl; 
	}
	return count; 
} 

// Driver program to test above functions 
int main() 
{ 
	cout << findWays(2, 2, 12) << endl; 
    
	

	return 0; 
} 


#include <bits/stdc++.h>


	// Write your code here.
	/*
	Time Complexity  : O(N)
	Space Complexity : O(1)

	Where 'N' is the number given in the problem.
*/

int modularExponentiation(int x, int n, int m) {
	// Declare a variable to store our result and initialize it with 1.
	int answer = 1;

	// Iterating 'N' times.
	for (int i = 1; i <= n; i++) {
		// Multiply answer with 'X' and then do modulo with 'M'.
		answer = (1LL * answer * x) % m;
	}
	// Return the answer.
	return answer;

}
/*
=======Second aaproach binary representation ========
#include <bits/stdc++.h>
/*
	Time Complexity  : O(log N)
	Space Complexity : O(1)

	Where 'N' is the number given in the problem.
*/

/*


int modularExponentiation(int x, int n, int m) {
	// Declare a variable to store our result and initialize it with 1.
	int answer = 1;

	// Run a loop until 'N' > 0.
	while (n > 0) {
		// If bitwise and of 'N' with 1 is 1 then multiply answer with 'X'.
		if (n & 1)  {
			answer = (1LL * answer * x) % m;
		}
		// Do modular squaring of 'X'.
		x = (1LL * x * x ) % m;

		// Right shift 'N' by 1 bit for next iteration.
		n >>= 1;
	}
	// Return the answer.
	return answer;
}
*/
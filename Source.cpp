#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int num) {
	int temp = num, rev = 0;

	while(temp > 0)
	{
		rev *= 10;
		rev += temp % 10; 
		temp /= 10; 
	}
	return num == rev;
}


int main(){
	int n;
	cin >> n;

	if (isPalindrome(n)) cout << n << " is palindrome" << endl;
	else cout << n << " is NOT palindrome" << endl;
	return 0;
}
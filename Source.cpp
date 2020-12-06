#include <iostream>
#include <string>
using namespace std;

//function to check if the number is palindrome
bool isPalindrome(int num) {
	//temp for help, and rev for reverse
	int temp = num, rev = 0;
	
	//loop to create the reverse number
	while(temp > 0)
	{
		rev *= 10; //multiply by 10 
		rev += temp % 10; //and add the last number of the temp
		temp /= 10; //remove the last digit of the number
	}
	return num == rev; //return the equality if yes it's 1 else it returns 0
}

//main fonction
int main(){
	int n;
	//enter the number to check
	cin >> n;

	//call the function and collect the result
	if (isPalindrome(n)) cout << n << " is palindrome" << endl;
	else cout << n << " is NOT palindrome" << endl;
	return 0;
}

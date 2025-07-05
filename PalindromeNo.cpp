#include<iostream>
using namespace std;
bool isPalindrome(int x){
	if(x<0) return false;
	int rev=0;
	int num=x;
	while(num!=0){
		int digit=num%10;
		rev=rev*10+digit;
		num=num/10;
		
		
	}
	return rev==x;
}
int main() {
    int x = 121;
    if (isPalindrome(x)) {
        cout << x << " is a palindrome." << endl;
    } else {
        cout << x << " is not a palindrome." << endl;
    }
}
